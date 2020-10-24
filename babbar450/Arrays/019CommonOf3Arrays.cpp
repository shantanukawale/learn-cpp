#include <bits/stdc++.h>
using namespace std;

int arr1[] = {1, 5, 10, 20, 40, 80};
int arr2[] = {6, 7, 20, 80, 100};
int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

int main () {
  int i = 0, j = 0, k = 0;

  while (
    i < (sizeof(arr1)/sizeof(arr1[0])) &&
    j < (sizeof(arr2)/sizeof(arr2[0])) &&
    k < (sizeof(arr3)/sizeof(arr3[0]))
  ) {
    if (arr1[i] == arr2[j] && arr2[j] && arr3[k]) {
      cout << arr1[i] << " ";
      i++;
      j++;
      k++; 
    } else if (arr1[i] < arr2[j]) i++;
    else if (arr2[j] < arr3[k]) j++;
    else k++;
  }

  cout << endl;
  return 0;
}