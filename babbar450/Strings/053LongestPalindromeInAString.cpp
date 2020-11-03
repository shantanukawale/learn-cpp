#include <bits/stdc++.h>
using namespace std;
// not doing brute force.
void printSubStr(string s, int start, int end) {
  for (int i = start; i <= end; ++i) cout << s[i] << " ";
  cout << endl;
}

int longestPalindromeSubstr(string str) {
  int n = str.size();
  bool table[n][n];
  memset(table, 0, sizeof(table));

  int maxLength = 1; // length 1

  for(int i = 0; i < n; ++i) table[i][i] = true;

  int start = 0;
  //length 2
  for (int i = 0; i < n-1; ++i) {
    if(str[i] == str[i+1]) {
      table[i][i+1] = true;
      start = i;
      maxLength = 2;
    }
  }

  for (int k = 3; k <= n; ++k) {
    for (int i = 0; i < n-k; ++i) {
      int j = i + k - 1;
      if(table[i+1][j-1] && str[i] == str[j]) {
        table[i][j] = true;
        if (k > maxLength) {
          start = i;
          maxLength = k;
        }
      }
    }
  }

  cout << "Longest Palindromic Substring: ";
  printSubStr(str, start, start + maxLength - 1);

  return maxLength;
}

int main() {
  string str = "bforgeeksskeegfora";
  cout << "Length is: " << longestPalindromeSubstr(str) << endl;
  return 0;
}