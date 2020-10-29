#include <bits/stdc++.h>
using namespace std;
int trappedRainWater(int arr[], int n) {
  int *leftMax = new int[n];
  int *rightMax = new int[n];
  int sum = 0;
  leftMax[0] = arr[0];
  rightMax[0] = arr[n-1];

  for (int i = 1; i < n-1; i++) leftMax[i] = max(arr[i], leftMax[i-1]);
  for (int i = n-1; i > 0; i--) rightMax[i] = max(arr[i], leftMax[i+1]);

  for (int i = 0; i < n; i++) sum += max(min(leftMax[i], rightMax[i]) - arr[i], 0);

  return sum;
}

int main () {
  int arr[] = {7, 4, 0, 9};
  int amount = trappedRainWater(arr, sizeof(arr)/sizeof(arr[0]));

  cout << "Trapped Rainwater for arr: " << amount << endl;

  int arr1[] = {6, 9, 9};
  amount = trappedRainWater(arr1, sizeof(arr1)/sizeof(arr1[0]));

  cout << "Trapped Rainwater for arr1: " << amount << endl;
}