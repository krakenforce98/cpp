#include <bits/stdc++.h>
using namespace std;
string A,B;
int main () {
  freopen ("STR.INP","r",stdin);
  freopen ("STR.OUT","w",stdout);
  int M,N;
  cin >> M >> N;
  for (int i = 1; i <= M; i ++) A += (char)(N + '0');
  for (int i = 1; i <= N; i ++) B += (char)(M + '0');
  if (M < N) {
    cout << B;
  }
  if (M == N) {
    cout << B;
  }
  if (M > N) {
    cout << A;
  }
}
