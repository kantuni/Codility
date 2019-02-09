#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &a, int k) {
  if (a.size() == 0) {
    return a;
  }
  k = k % a.size();
  deque<int> dq;
  for (auto value: a) {
    dq.push_back(value);
  }
  for (int i = 0; i < k; i++) {
    int tmp = dq.back();
    dq.pop_back();
    dq.push_front(tmp);
  }
  vector<int> ans;
  while (!dq.empty()) {
    ans.push_back(dq.front());
    dq.pop_front();
  }
  return ans;
}
