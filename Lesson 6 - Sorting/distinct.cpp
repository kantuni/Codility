#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  set<int> s(a.begin(), a.end());
  return s.size();
}
