#include <bits/stdc++.h>
using namespace std;
int arr[] = {1, 2, 90, 10, 110};

void On2() {
  int maxProfit = 0;
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    for(int j = i+1; j < sizeof(arr)/sizeof(arr[0]); j++) {
      maxProfit = max(maxProfit, arr[j] - arr[i]);
    }
  }

  cout << "maxProfit: " << maxProfit << endl;
}

void On() {
  int maxDiff = -1;
  int maxRight = arr[(sizeof(arr)/sizeof(arr[0]))-1];

  for(int i = (sizeof(arr)/sizeof(arr[0]))-2; i >=0; i--) {
    if (arr[i] > maxRight) maxRight = arr[i];
    else {
      int diff = maxRight - arr[i];
      maxDiff = max(maxDiff, diff);
    }
  }

  cout << "maxProfit: " << maxDiff << endl;
}

int main() {
  On2();
  On();
  return 0;
}