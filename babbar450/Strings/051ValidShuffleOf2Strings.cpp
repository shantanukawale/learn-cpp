#include <bits/stdc++.h>
using namespace std;
bool validShuffle(string s1, string s2, string test) {
  string combinedStr = s1 + s2;
  if (combinedStr.length() != test.length()) return false;

  unordered_map<char, int> m;
  for (int i = 0; i < combinedStr.length(); i++) m[combinedStr[i]]++;
  
  unordered_map<char, int> mtest;
  for (int i = 0; i < test.length(); i++) mtest[test[i]]++;

  for (int i = 0; i < test.length(); i++) if(m[test[i]] != mtest[test[i]]) return false;

  return true;
}

int main() {
  string s1 = "hello";
  string s2 = "hi";
  string test = "hellihoo";
  cout << "String is " << (validShuffle(s1, s2, test) ? "a valid " : "an invalid ") << "shuffle of 2 strings." << endl;
  return 0;
}