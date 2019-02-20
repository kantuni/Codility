#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  int ans = 0;
  for (int i = 1; i < (int) a.size() + 2; i++) {
    ans = ans xor i;
  }
  for (auto ai: a) {
    ans = ans xor ai;
  }
  return ans;
}
