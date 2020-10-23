#include <bits/stdc++.h>
using namespace std;

int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

// this code works for when all number in the array are negative as well.

int main () {
  int maxSoFar = arr[0], maxEndingHere = arr[0];
  for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
    maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
    maxSoFar = max(maxSoFar, maxEndingHere);
  }

  cout <<"maxSoFar: " << maxSoFar << endl;
  return 0;
}