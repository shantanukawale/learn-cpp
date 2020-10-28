#include <bits/stdc++.h>
using namespace std;
int smallestSubarrayWithSumGreaterThanX(int arr[], int n, int x) {
  int currSum = 0, minLen = n+1;
  
  int start = 0, end = 0;
  while (end < n) {
    while (currSum <= x && end < n) currSum += arr[end++];

    while (currSum >= x && start < n) {
      minLen = min(minLen, end - start);
      currSum -= arr[start++];
    }
  }

  return minLen;
}

int main () {
  int arr[] = {1, 10, 5, 2, 7};
  int x = 9;
  int length = smallestSubarrayWithSumGreaterThanX(arr, sizeof(arr)/sizeof(arr[0]), 9);
  // if length == n+1 then not possible.
  cout << "MinLen: " << length << endl;
  return 0;
}