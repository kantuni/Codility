#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int d) {
  int ans = (y - x) / d;
  ans += (y - x) % d ? 1 : 0;
  return ans;
}
