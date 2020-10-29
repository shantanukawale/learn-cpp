#include <bits/stdc++.h>
using namespace std;
int findMinSwaps(int arr[], int n, int k) {
  int currLteK;
  int currGtK; 
  int swapCount = 0;
  int i = 0;
  while(i < n) {
    while(i < n) {
      if (arr[i] > k) {
        currGtK = i;
        break;
      }
      i++;
    }

    while (i < n) {
      if (arr[i] <= k) {
        currLteK = i;
        break;
      }
      i++;
    }

    if (i < n) {
      swap(arr[currLteK], arr[currGtK]);
      swapCount++;
    }
  }

  return swapCount;
}

int main() {
  int arr[] = {2, 1, 5, 6, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  int minSwaps = findMinSwaps(arr, n, k);
  cout << " Min Swaps required = " << minSwaps << endl;

  int arr1[] = {2, 7, 9, 5, 8, 7, 4};
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int k1 = 6;
  int minSwaps1 = findMinSwaps(arr1, n1, k1);
  cout << " Min Swaps required = " << minSwaps1 << endl;
  return 0;
}