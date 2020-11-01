#include <bits/stdc++.h>
using namespace std;
void findDuplicates(string s) {
  unordered_map<char, int> m;
  for(int i = 0; i < s.length(); i++) m[s[i]]++;
  cout << "Duplicates: ";
  for (auto j: m) if (j.second > 1) cout << j.first <<  " ";
  cout << endl;
}

int main() {
  string s = "abbcdeff";
  findDuplicates(s);
  return 0;
}