#include <bits/stdc++.h>
using namespace std;
#define R 4  
#define C 4

int first(int arr[], int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if ((mid == 0 || arr[mid-1] == 0) && arr[mid] == 1) return mid;
    else if (arr[mid] == 0) return first(arr, (mid+1), high);
    else return first(arr, low, (mid-1));
  }
  
  return -1;
}

int rowWithMax1s(int arr[R][C]) { 
  int maxRowIndex = 0, max = -1;

  int i, index;
  for (i = 0; i < R; i++) {
    index = first(arr[i], 0, C-1);
    if(index != -1 && C-index > max) {
      max = C-index;
      maxRowIndex = i;
    }
  }

  return maxRowIndex;
}

int main() {
  int arr[R][C] = {
    {0, 1, 1, 1},
    {0, 0, 1, 1},
    {1, 1, 1, 1},
    {0, 0, 0, 0}
  };
  
  cout << "Row with max 1s: " << rowWithMax1s(arr) << endl;
  return 0;
}