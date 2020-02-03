#include <bits/stdc++.h>
using namespace std;
int L[2501][2501] = {0};
int n, m;
string A,B;
int main () {
// freopen ("LCS.INP","r",stdin);
// freopen ("LCS.OUT","w",stdout);
  cin >> m >> n >> A >> B;
  int cnt = 0;
  A = "0" + A;
  B = "0" + B;
  for (int i = 1; i <= m; i ++) {
    for (int j = 1; j <= n; j ++) {
      if (A[i] == B[j]) {
        L[i][j] = L[i-1][j-1] + 1;
      }else{
        L[i][j] = max(L[i-1][j], L[i][j-1]);
      }
      if (L[i][j] > cnt) cnt = L[i][j];
    }
  }
  cout << cnt;
}
