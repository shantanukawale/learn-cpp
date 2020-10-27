#include <bits/stdc++.h>
using namespace std;

void findNdk(int arr[], int n, int k) {
  unordered_map<int, int> m;
  for(int i = 0; i < n; i++) m[arr[i]]++;
  
  for (auto i: m) if (i.second > (n/k)) cout << "Number: " << i.first << " Count: " << i.second << endl;
}

int main() {
  int arr1[] = {4, 5, 6, 7, 8, 4, 4}; 
  int size = sizeof(arr1)/sizeof(arr1[0]); 
  int k = 3;
  findNdk(arr1, size, k);

  return 0;
}