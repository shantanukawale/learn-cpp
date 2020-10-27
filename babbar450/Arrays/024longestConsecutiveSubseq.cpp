#include <bits/stdc++.h>
using namespace std;

int findLongestConsecutiveSubsequence(int arr[], int n) {
  int ans = 0, count = 0;
  sort(arr, arr + n);

  for (int i = 0; i < n; i++) {
    if (i > 0 && arr[i] == arr[i - 1] + 1) count++;
    else count = 1;

    ans = max(count, ans);
  }

  return ans;
}

int main() {
  int arr[] = {1, 9, 3, 10, 4, 20, 2};
  int subSeqLength = findLongestConsecutiveSubsequence(arr, sizeof(arr)/sizeof(arr[0]));

  cout << "Length of longest consecutive subsequence: " << subSeqLength << endl;
  return 0;
}