#include <bits/stdc++.h>
using namespace std;

int solution(int x, vector<int> &a) {
  vector<int> f(x + 1, 0);
  int ans = -1;
  for (int i = 0; i < a.size(); i++) {
    if (f[a[i]] == 0) {
      f[a[i]] = 1;
      x--;
    }
    if (x == 0) {
      ans = i;
      break;
    }
  }
  return ans;
}
