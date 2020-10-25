#include <bits/stdc++.h>
using namespace std;

int arr[] = {1, 4, -2, -2, 5, -4, 3};

bool subArrayExists(int arr[], int n) {
  unordered_set<int> sumSet;

  int sum = 0;

  for (int i = 0; i < n ; i++) {
    sum += arr[i];

    if (sum == 0 || sumSet.find(sum) != sumSet.end()) return true;

    sumSet.insert(sum);
  }

  return false;
}

int main() {
  bool success = subArrayExists(arr, sizeof(arr)/sizeof(arr[0]));

  if (success) cout << "SubArray Exists" << endl;
  else cout << "SubArray Not Found" << endl;

  return 0;
}