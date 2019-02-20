#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<int> &a) {
  vector<int> c(n, 0);
  int cmax = 0, cmin = 0;
  for (auto ai: a) {
    if (ai - 1 < n) {
      if (c[ai - 1] < cmin) {
        c[ai - 1] = cmin;
      }
      c[ai - 1]++;
      cmax = max(cmax, c[ai - 1]);
    } else {
      cmin = cmax;
    }
  }
  for (auto &ci: c) {
    ci = max(ci, cmin);
  }
  return c;
}
