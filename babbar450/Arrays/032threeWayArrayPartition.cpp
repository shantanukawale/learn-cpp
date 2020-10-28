#include <bits/stdc++.h>
using namespace std;
void threeWayPartition(int arr[], int n, int lowVal, int highVal) {
  int start = 0, end = n-1;
  for (int i = 0; i <= end;) {
    if (arr[i] < lowVal) swap(arr[i++], arr[start++]);
    else if (arr[i] > highVal) swap(arr[i], arr[end--]);
    else i++;
  }
  
  cout << "Modified Array:" << endl;
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
}

int main() {
  // easiest solution is to sort the array
  int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  int lowVal = 14;
  int highVal = 20;
  threeWayPartition(arr, n, lowVal, highVal);
  return 0;
}