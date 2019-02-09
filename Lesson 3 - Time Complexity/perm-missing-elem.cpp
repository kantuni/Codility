#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  int ans = 0;
  for (int i = 1; i < a.size() + 2; i++) {
    ans = ans xor i;
  }
  for (int i = 0; i < a.size(); i++) {
    ans = ans xor a[i];
  }
  return ans;
}
