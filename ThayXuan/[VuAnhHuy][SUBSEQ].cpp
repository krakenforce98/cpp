#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N;
ll A[8002], L[8002], T[8002];
int main () {
  freopen ("SUBSEQ.INP","r",stdin);
  freopen ("SUBSEQ.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) cin >> A[i];
  A[0] = - 1e9 - 1;
  A[N+1] = 1e9 + 1;
  L[N+1] = 1;
  ll jmax;
  for (int i = N; i >= 0; i --) {
    jmax = N + 1;
    for (int j = i + 1; j <= N + 1; j ++) {
      if (A[j] > A[i] && L[j] > L[jmax]) {
        jmax = j;
      }
    }
    L[i] = L[jmax] + 1;
  }

  cout << L[0] - 2;
}
