#include <bits/stdc++.h>
using namespace std;
string s = { "gfg" };

int main () {
  //withStl
  bool val = next_permutation(s.begin(), s.end());

  if (val == false) cout << "No Word Possible" << endl;
  else cout << s << endl;

  return 0;
}