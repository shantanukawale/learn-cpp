#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s) {
  for (int i = 0; i < s.length()/2; i++) {
    if (s[i] != s[s.length() - 1 - i]) return false;
  }

  return true;
}

int main() {
  string s = "ababba";
  cout << "String is " << (checkPalindrome(s) ? "" : "not ") << "a Palindrome" << endl;
}