#include <bits/stdc++.h>
using namespace std;
void found(int x, int y) {
  cout << "Element Found at (" << x << ", " << y << ")" << endl;
}

void binarySearch(int mat[4][5],  int i, int jLow, int jHigh, int x) {
  while(jLow <= jHigh) {
    int jMid = (jLow + jHigh)/2;
    if (mat[i][jMid] == x) {
      found(i, jMid);
      return;
    } else if (mat[i][jMid] < x) jLow = jMid + 1;
    else jHigh = jMid - 1;
  }
  cout << "Element not found!" << endl;
}

void sortedMatrixSearch(int arr[4][5], int rows, int columns, int x) {
  if (rows == 1) {
    binarySearch(arr, 0, 0, columns - 1, x);
    return;
  }

  int iLow = 0;
  int iHigh = rows-1;
  int jMid = columns/2;
  
  while ((iLow + 1) < iHigh) {
    int iMid = (iLow + iHigh) / 2;

    if (arr[iMid][jMid] == x) {
      found(iMid, jMid);
      return;
    } else if (arr[iMid][jMid] > x) iHigh = iMid;
    else iLow = iMid + 1;
  }

  if (arr[iLow][jMid] == x) {
    found(iLow, jMid);
    return;
  } else if (arr[iLow+1][jMid]) {
    found(iLow+1, jMid);
    return;
  } else if (x <= arr[iLow][jMid-1]) binarySearch(arr, iLow, 0, jMid-1, x);
  else if (x >= arr[iLow][jMid+1] && x <= arr[iLow][columns-1]) binarySearch(arr, iLow, jMid+1, columns-1, x);
  else if (x <= arr[iLow+1][jMid-1]) binarySearch(arr, iLow+1, 0, jMid-1, x);
  else binarySearch(arr, iLow+1, jMid+1, columns-1, x);
}

int main() {
  int n = 4, m = 5, x = 8;
  int mat[4][5] = {
    {0, 6, 8, 9, 11},
    {20, 22, 28, 29, 31},
    {36, 38, 50, 61, 63},
    {64, 66, 100, 122, 128}
  };
 
  sortedMatrixSearch(mat, n, m, x);
  return 0;
}