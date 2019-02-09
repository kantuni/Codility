#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  set<int> s;
  for (int i = 0; i < a.size(); i++) {
    s.insert(a[i]);
  }
  int n = 1;
  while (s.count(n) == 1) {
    n++;
  }
  return n;
}
