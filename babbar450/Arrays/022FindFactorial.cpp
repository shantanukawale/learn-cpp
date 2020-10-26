#include <bits/stdc++.h>
using namespace std;

#define MAX 500
int smallK = 10;
int K = 100;

int multiply(int x, int res[], int resSize) {
  int carry = 0;
  for (int i = 0; i < resSize; i++) {
    int product = res[i] * x + carry;
    res[i] = product % 10;
    carry = product / 10;
  }

  while (carry) {
    res[resSize] = carry % 10;
    carry = carry/10;
    resSize++;
  }

  return resSize;
}

void factorial (int n) {
  int res[MAX];

  res[0] = 1;
  int resSize = 1;

  for (int x = 2; x <= n; x++) resSize = multiply(x, res, resSize);

  cout << "Factorial of " << K << ": " << endl;
  for (int i = resSize - 1; i >= 0; i--) cout << res[i];
  cout << endl;
}

int factorialForSmallInts(int n) {
  if (n <= 1) return 1;

  return n * factorialForSmallInts(n - 1);
}

int main() {
  int ans = factorialForSmallInts(smallK);
  cout << "Factorial of " << smallK << ": " << ans << endl;

  factorial(K);

  return 0;
}