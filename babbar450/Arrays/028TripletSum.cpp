#include <bits/stdc++.h>
using namespace std;

bool doesTripletExist(int arr[], int n, int sum) {
  int l, r;

  sort(arr, arr + n);

  for (int i = 0; i < n; i++) {
    l = i+1;

    r = n-1;

    while(l < r) {
      if (arr[i] + arr[l] + arr[r] == sum) {
        cout << "Triplet is: "<< arr[i] << ", " << arr[l] << ", " << arr[r] << ", " << endl;
        return true;
      } else if (arr[i] + arr[l] + arr[r] < sum) l++;
      else r--;
    }
  }

  return false;
}

int main() {
  int arr[] = {12, 3, 4, 1, 6, 9}, sum = 24;
  int n = sizeof(arr)/sizeof(arr[0]);

  bool success = doesTripletExist(arr, n, sum);

  cout << (success ? "Triplet Exists" : "Triplet does not exist") << endl;
  return 0;
}