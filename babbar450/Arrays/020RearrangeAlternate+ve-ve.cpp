#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int outOfPlace, int curr) {
  char temp = arr[curr];
  for (int i = curr; i > outOfPlace; i--) arr[i] = arr[i-1];
  arr[outOfPlace] = temp;
}

void rearrange(int arr[], int n) {
  int outOfPlace = -1;

  for (int i = 0; i < n; i++) {
    if (outOfPlace >= 0) {
      if (
        (arr[i] >= 0) && (arr[outOfPlace] < 0) ||
        ((arr[i] < 0) && (arr[outOfPlace] >= 0))
      ) {
        rightRotate(arr, n, outOfPlace, i);

        if (i - outOfPlace >= 2) outOfPlace = outOfPlace + 2;
        else outOfPlace = -1;
      }
    }

    if (outOfPlace == -1) {
      if (
        ((arr[i] >= 0) && (!(i % 2))) || // not even index
        ((arr[i] < 0) && (i % 2)) // even index
      ) {
        outOfPlace = i;
      }
    }
  }
}

int main() {
  int arr[] = {1, 2, 3, -4, -1, 4};
  int length = sizeof(arr)/sizeof(arr[0]);

  cout << "Input Array: " << " ";
  for (int i = 0; i < length; i++) cout << arr[i] << " ";
  cout << endl;

  rearrange(arr, length);

  cout << "Output Array: " << " ";
  for (int i = 0; i < length; i++) cout << arr[i] << " ";
  cout << endl;

  return 0;
}