#include <bits/stdc++.h>
using namespace std;
// work for smae and different lengths both
int findMedian(int arr1[], int arr2[], int n1, int n2) {
  int e1, e2 = min(arr1[0], arr2[0]);
  int indArr1 = 0, indArr2 = 0;
  for(int i = 0; i < ((n1 + n2)/2) + 1; i++) {
    if (arr1[indArr1] < arr2[indArr2]) {
      e1 = e2;
      e2 = arr1[indArr1];
      indArr1++;
    } else if (arr1[indArr1] > arr2[indArr2]) {
      e1 = e2;
      e2 = arr2[indArr2];
      indArr2++;
    } else {
      e1 = e2;
      e2 = arr1[indArr1];
      indArr1++;
    }
  }

  return (n1 + n2) % 2 ? e2 : (e1 + e2)/2;
}

int main() {
  int arr1[] = {1, 12, 15, 26, 38};
  int arr2[] = {2, 13, 17, 30, 45, 72};

  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  cout << "Median of 2 sorted arrays of different lengths: " << findMedian(arr1, arr2, n1, n2) << endl;
  return 0;
}