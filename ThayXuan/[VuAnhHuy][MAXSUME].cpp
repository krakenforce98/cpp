#include <bits/stdc++.h>
using namespace std;
int M, N;
long long A[1001][1001] = {0};
int main () {
  freopen("MAXSUME.INP","r",stdin);
  freopen("MAXSUME.OUT","w",stdout);
  cin >> M >> N;
  for (int i = 1; i <= M; i ++)
    for (int j = 1; j <= N; j ++) {
      cin >> A[i][j];
      if (A[i][j] % 2 == 1) A[i][j] = 0;
    }

  for (int i = 1; i <= M; i ++) {
    for (int j = 1; j <= N; j ++) {
      A[i][j] += max(A[i-1][j],A[i][j-1]);
    }
  }
  cout << A[M][N];
}
