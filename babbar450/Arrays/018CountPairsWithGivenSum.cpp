#include <bits/stdc++.h>
using namespace std;
int arr[] = {1, 5, 7, -1, 1};
int sum = 6;
// On^2 obvious solution not written

int main() {
  unordered_map<int , int> m;

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) m[arr[i]]++;
  
  int twiceCount = 0;
  for (int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++) {
    twiceCount += m[sum - arr[i]];

    if (sum - arr[i] == arr[i]) twiceCount --;
  }

  cout << "Pairs with the given sum are: " << twiceCount/2 << endl;

  return 0;
}