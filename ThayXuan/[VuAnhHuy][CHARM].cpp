#include <bits/stdc++.h>
using namespace std;
long B[3420][12900] = {0};
long N, M;
long W[3420], V[3420];

int main () {
  freopen  ("CHARM.INP","r",stdin);
  freopen  ("CHARM.OUT","w",stdout);
   cin >> N >> M;
   for (long i = 1; i <= N; i ++) cin >> W[i] >> V[i];
   for (long i = 1; i <= N; i ++) {
     for (long j = 0; j <= M; j ++) {
       B[i][j] = B[i-1][j];
       if (j >= W[i] && B[i][j] < B[i-1][j-W[i]] + V[i])
          B[i][j] = B[i - 1][j - W[i]] + V[i];
     }
   }
   cout << B[N][M];
}
