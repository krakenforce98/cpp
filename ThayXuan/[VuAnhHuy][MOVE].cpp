#include <bits/stdc++.h>
using namespace std;
long A[501][501] = {0};
int m, n;

int main () {
  freopen ("MOVE.INP","r",stdin);
  freopen ("MOVE.OUT","w",stdout);
  cin >> m >> n;
  for (int i = 1; i <= m; i ++) {
    for (int j = 1; j <= n; j ++) {
      scanf("%ld", &A[i][j]);
    }
  }
  for (int i = 1; i <= m; i ++) {
    for (int j = 1; j <= n; j ++) {
      if (j == 1) A[i][j] += A[i-1][j];
      else if (i == 1) A[i][j] += A[i][j-1];
      else A[i][j] += max(A[i-1][j], A[i][j-1]);
    }
  }
  cout << A[m][n];
}
