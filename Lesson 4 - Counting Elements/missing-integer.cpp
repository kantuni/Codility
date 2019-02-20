#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  set<int> s;
  for (auto ai: a) {
    s.insert(ai);
  }
  int n = 1;
  while (s.count(n) == 1) {
    n++;
  }
  return n;
}
