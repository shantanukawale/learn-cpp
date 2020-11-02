#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
  if (n == 1) return "1";
  if (n == 2) return "11";

  string str = "11";

  for (int i = 3; i <= n; i++) {
    str += "$"; // previous char processed in current loop so dummy character required.length()
    int len = str.length();
    int cnt = 1;
    string temp = "";

    for(int j = 1; j < len; j++) {
      if (str[j] != str[j-1]) {
        temp += cnt + '0'; 
        temp += str[j-1];
        cnt = 1;
      } else {
        cnt++;
      }
    }
    str = temp;
  }

  return str;
}

int main() {
  int N = 3;
  cout << countAndSay(N) << endl;
  return 0; 
}