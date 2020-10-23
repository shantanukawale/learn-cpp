#include <bits/stdc++.h>
using namespace std;

struct interval { int start, end; };
interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
bool compareInterval(interval a, interval b) {
  return (a.start < b.start);
}

void mergeIntervals(interval arr[], int length) {
  if (length == 0) return;
  if (length == 1) {
    cout << "Need atleast two intervals for merging" << endl;
    return;
  }

  stack<interval> s;

  sort(arr, arr + length, compareInterval);

  s.push(arr[0]);

  for (int i = 1; i < length; i++) {
    interval top = s.top();
    if (top.end < arr[i].start) s.push(arr[i]);
    else if (top.end < arr[i].end) {
      top.end = arr[i].end;
      s.pop();
      s.push(top);
    }
  }

  cout << "Merged Intervals:" << endl;
  while (!s.empty()) {
    interval t = s.top();
    cout << "[" << t.start << "," << t.end << "] ";
    s.pop();
  }
  cout << endl;
  return;
}

int main() {
  mergeIntervals(arr, sizeof(arr)/sizeof(arr[0]));
  return 0;
}