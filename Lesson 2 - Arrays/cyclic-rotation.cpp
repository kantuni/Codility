#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &a, int k) {
  if (a.size() > 0) {
    k = k % a.size();
    rotate(a.begin(), a.begin() + a.size() - k, a.end());
  }
  return a;
}
