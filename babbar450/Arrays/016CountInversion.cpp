#include <bits/stdc++.h>
using namespace std;
int arr[] = { 1, 20, 6, 4, 5 };

int main() {
  int inversionCount = 0;
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    for (int j = 0; j < i; j++) {
      if(arr[j] > arr[i]) inversionCount++;
    }
  }

  cout << "inversionCount: " << inversionCount << endl;
  return 0;
}