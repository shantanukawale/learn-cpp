#include <bits/stdc++.h>
using namespace std;

int arr[] = {6, -3, -10, 0, 2};

int findMaxProdSubarray () {
  int maxEndingHere = 1;
  int maxSoFar = 1;
  int minEndingHere = 1;
  int flag = 0;

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    if (arr[i] > 0) {
      maxEndingHere = max(maxEndingHere * arr[i], maxEndingHere);
      minEndingHere = min(minEndingHere * arr[i], minEndingHere);
      flag = 1;
    } else if (arr[i] == 0) {
      maxEndingHere = 1;
      minEndingHere = 1;
    } else {
      int temp = maxEndingHere;
      maxEndingHere = max(minEndingHere * arr[i], 1);
      minEndingHere = temp * arr[i];
      flag = 1;
    }

    maxSoFar = max(maxEndingHere, maxSoFar);
  }
  
  if (flag == 0 && maxSoFar == 1) return 0;
  return maxSoFar;
}

int main() {
  int maxprodSubArray = findMaxProdSubarray();

  cout << "maxprodSubArray: " << maxprodSubArray << endl;
  return 0;
}