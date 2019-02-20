#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  long long sum = 0;
  for (auto ai: a) {
    sum += ai;
  }
  long long l = 0, r = 0;
  long long ans = -1;
  for (int i = 0; i < (int) a.size() - 1; i++) {
    l += a[i];
    r = sum - l;
    if (ans == -1) {
      ans = abs(l - r);
    } else {
      ans = min(ans, abs(l - r));    
    }
  }
  return ans;
}
