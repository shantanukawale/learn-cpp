#include <bits/stdc++.h>
using namespace std;
int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

int main() {
  int maxEndingHere = arr[0], maxSoFar = arr[0];
  for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
    maxEndingHere = max(maxEndingHere + arr[i], arr[i]);
    maxSoFar = max(maxSoFar, maxEndingHere);
  }
  cout << "max sum of contiguous sub-array: " << maxSoFar << endl;
  return 0;
}