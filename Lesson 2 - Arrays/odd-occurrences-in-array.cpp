#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  int ans = 0;
  for (auto ai: a) {
    ans = ans xor ai;
  }
  return ans;
}
