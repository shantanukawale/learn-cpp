#include <bits/stdc++.h>
using namespace std;
int n = 2, m = 3;
int arr1[] = {10, 12};
int arr2[] = {5, 18, 20};

int main() {
  // insertion sort technique
  for (int i = m - 1; i >= 0; i--) {

    int j, last = arr1[n - 1];
    for (j = n-2; j >= 0 && arr1[j] > arr2[i]; j--) arr1[j+1] = arr1[j];

    if (j != n-2 || last > arr2[i]) {
      arr1[j+1] = arr2[i];
      arr2[i] = last;
    }
  }
  
  cout << "Array 1:" << endl;
  for (int i = 0; i < n; i++) cout << arr1[i] << " ";
  cout << endl << "Array 2:" << endl;
  for (int j = 0; j < m; j++) cout << arr2[j] << " ";
  cout << endl;
  return 0;
}