#include <bits/stdc++.h>
using namespace std;
long A[1001];
int N;
int main () {
  freopen ("SHIP.INP","r",stdin);
  freopen ("SHIP.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) cin >> A[i];
  sort(A+1,A+1+N);
  long MIN = A[N] - A[1];
  for (int i = 2; i <= N; i ++) {
    if (A[i] - A[i-1] <= MIN) MIN = A[i] - A[i-1];
  }
  cout << MIN;
}
