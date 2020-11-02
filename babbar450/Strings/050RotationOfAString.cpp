#include <bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2) {
  if (str1.length() != str2.length()) return false;
  string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}

int main() {
  string str1 = "abcde", str2 = "bcdea";
  cout << "Strings are " << (areRotations(str1, str2) ? "" : "not ") << "rotations of each other." << endl;
  return 0;
}