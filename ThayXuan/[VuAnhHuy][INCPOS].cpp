#include <bits/stdc++.h>
using namespace std;
long N, Q, l, r, cnt = 0;
long long x;
pair<long long,long long> A[2000001];
int main () {
  freopen ("INCPOS.INP","r",stdin);
  freopen ("INCPOS.OUT","w",stdout);
  cin >> N >> Q;
  for (long i = 1; i <= N; i ++) {
    scanf("%lld", &A[i].first);
    if (i >= 2) {
      A[i].second = A[i-1].first - A[i].first;
      if (A[i].second > 0) cnt ++;
    }
  }
  for (long i = 1; i <= Q; i ++) {
    scanf("%ld %ld %lld", &l, &r, &x);
    if (l == 1 && r == N) {
      printf("%ld\n", cnt);
      continue;
    }
    long long r_before, r_after, l_before, l_after;
    r_before = A[r+1].second;
    l_before = A[l].second;
    if (l == 1) {
      A[r+1].second += x;
    }else if (r == N) {
      A[l].second -= x;
    }else {
      A[l].second -= x;
      A[r+1].second += x;
    }
    r_after = A[r+1].second;
    l_after = A[l].second;

    if (r_before <= 0 && r_after > 0) cnt ++;
    if (r_before > 0 && r_after <= 0) cnt --;

    if (l_before <= 0 && l_after > 0) cnt ++;
    if (l_before > 0 && l_after <= 0) cnt --;

    printf("%ld\n", cnt);
  }

}
