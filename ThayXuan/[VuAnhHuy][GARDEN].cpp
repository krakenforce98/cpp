#include <bits/stdc++.h>
using namespace std;
int L, N;
long long l = 1, r = 10000000010000LL, mid, rs;
int a[100001], b[100001];
bool check(long long x) {
  long long step = 0;
  for (long i = 1; i <= N; ++i) {
    if (a[i] <= x) {
      step += (x - a[i] + b[i] - 1) / b[i];    //cout << x-a[i]<< endl;
     }
  }
  return step <= L;
}
int main () {
  freopen ("GARDEN.INP","r",stdin);
  freopen ("GARDEN.OUT","w",stdout);
  cin >> N >> L;
  for (long i = 1; i <= N; i ++) {
    cin >> a[i] >> b[i];
  }
  while (l <= r) {
    mid = (l + r)/2;
    if (check(mid) == true) {
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
