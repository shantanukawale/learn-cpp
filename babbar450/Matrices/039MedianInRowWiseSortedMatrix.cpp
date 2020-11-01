#include <bits/stdc++.h>
using namespace std;
int binaryMedian(int arr[3][3], int rows, int columns) {
  int minInt = INT_MAX, maxInt = INT_MIN;

  for (int i = 0; i < rows; i++) {
    minInt = min(minInt, arr[i][0]);
    maxInt = max(maxInt, arr[i][columns-1]);
  }

  int desired = (rows * columns + 1) / 2;
  while (minInt < maxInt) {
    int mid = minInt + (maxInt - minInt) / 2;
    int place = 0;

    for (int i = 0; i < rows; i++) place += upper_bound(arr[i], arr[i]+columns, mid) - arr[i];
    if (place < desired) minInt = mid + 1;
    else maxInt = mid;
  }

  return minInt;
}

int main() {
  int r = 3, c = 3;
  int mat[3][3] = { {1,3,5}, {2,6,9}, {3,6,9} };
  cout << "Median is: " << binaryMedian(mat, r, c) << endl;
  return 0;
}