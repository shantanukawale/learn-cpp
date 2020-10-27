#include <bits/stdc++.h>
using namespace std;
bool isArray2SubsetOfArray1(int arr1[], int arr2[], int n1, int n2) {
  unordered_map<int, int> m;
  for (int i = 0; i< n1; i++) m[arr1[i]]++;

  for (int i = 0; i< n2; i++) if(m[arr2[i]] < 1) return false;

  return true;
}

int main() {
  int arr1[] = { 11, 1, 13, 21, 3, 7 };
  int arr2[] = { 11, 3, 7, 22 };
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);

  bool success = isArray2SubsetOfArray1(arr1, arr2, n1, n2);

  cout << (success ? "Array 2 is a subset of Array 1" : "Array 2 is not a subset of Array 1") << endl;

  return 0;
}