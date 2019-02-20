#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a) {
  sort(a.begin(), a.end());
  for (int i = 0; i < (int) a.size(); i++) {
    if (a[i] != i + 1) {
      return 0;
    }
  }
  return 1;
}
