#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
  bitset<32> bin(n);
  int start = 0, end = 0;
  for (int i = 0; i < 32; i++) {
    if (bin[i] == 1) {
      start = i;
      break;
    }
  }
  for (int i = 31; i > -1; i--) {
    if (bin[i] == 1) {
      end = i;
      break;
    }
  }
  int ans = 0, curr = 0;
  for (int i = start + 1; i < end; i++) {
    if (bin[i] % 2 == 0) {
      curr++;
    } else {
      curr = 0;
    }
    ans = max(ans, curr);
  }
  return ans;
}
