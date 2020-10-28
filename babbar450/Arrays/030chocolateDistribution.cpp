#include <bits/stdc++.h>
using namespace std;

int chocolateDistributionMinDiff(int arr[], int n, int m) {
  if (m == 0 || n == 0) return 0;

  sort(arr, arr+n);

  int minDiff = INT_MAX;
  for (int i = 0; i < n - m; i++) minDiff = min(minDiff, arr[i+m-1] - arr[i]);

  return minDiff;
}

int main () {
  int arr[] = {7, 3, 2, 4, 9, 12, 56};
  int m = 3;
  int minDiff = chocolateDistributionMinDiff(arr, sizeof(arr)/sizeof(arr[0]), m);

  cout << "Min Diff: " << minDiff << endl;
  return 0;
}