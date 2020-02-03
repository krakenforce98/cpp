#include <bits/stdc++.h>
using namespace std;
long long l = 1, r = 1817119, mid, rs;
long long calc (long long K) {
  long long sum = 0;
  for (long long i = 1; i <= K; i ++) {
    sum += i*(K - i + 2);
  }
  sum -= 1;
  return sum;
}
int main () {
  freopen ("DIKE.INP","r",stdin);
  freopen ("DIKE.OUT","w",stdout);
  long long N, sum = 0, max = 0;
  cin >> N;
  while (l <= r) {
    mid = (l + r)/2;
    if (calc(mid) <= N) {
      l = mid + 1;
      rs = mid;
    }else{
      r = mid - 1;
    }
    //cout << mid << endl;
  }
  cout << rs;
  return 0;
}
