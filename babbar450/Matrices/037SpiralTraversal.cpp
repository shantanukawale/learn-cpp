#include <bits/stdc++.h>
using namespace std;
void spiralPrint(int rows, int columns, int arr[3][6]) {
  int i, k = 0, l = 0;

  while (k < rows && l < columns) {
    for (i = 0; i < columns; ++i) cout << arr[k][i] << " ";
    k++;
    for (i = k; i < rows; ++i) cout << arr[i][columns-1] << " ";
    columns--;
    if(k < rows) {
      for (i = columns-1; i >= l; --i) cout << arr[rows-1][i] << " ";
      rows--;
    }
    if (l < columns) {
      for (i = rows-1; i > k ; --i) cout << arr[i][l] << " ";
      l++;
    }
  }

  cout << endl;
}

int main() {
  int arr[3][6] = { 
    { 1, 2, 3, 4, 5, 6 },
    { 14, 15, 16, 17, 18, 7 },
    { 13, 12, 11, 10, 9, 8 }
  };
     
  spiralPrint(3, 6, arr);
  return 0;
}