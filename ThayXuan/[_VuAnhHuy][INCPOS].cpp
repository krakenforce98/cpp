#include <bits/stdc++.h>
using namespace std;
long N, Q, l, r;
long long x;
long long A[2000001];
int main () {
  cin >> N >> Q;
  long cnt = 0;
  for (long i = 1; i <= N; i ++) cin >> A[i];
  for (long i = 1; i <= Q; i ++) {
    cin >> l >> r >> x;
    for (long j = l; j <= r; j ++) A[j] += x;
    for (long j = 1; j <= N - 1; j ++) {
      if (A[j] > A[j+1]) cnt ++;
    }
    cout << cnt << endl;
    cnt = 0;
  }
}
