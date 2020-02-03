#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A[1000001] = {0}, f[1000001] = {0};
int main () {
  freopen ("TONGMAX.INP","r",stdin);
  freopen ("TONGMAX.OUT","w",stdout);
  int N, t;
  bool check = true;
  cin >> N;
  for (int i = 1; i <= N; i ++) {
    cin >> A[i];
    if (A[i] >= 0) check = false;
  }
  if (check == true) {
    ll maxx = -1e9 - 1;
    for (int i = 1; i <= N; i ++) {
      if (A[i] > maxx) maxx = A[i];
    }
    cout << maxx;
    return 0;
  }
  ll maxx = 0, minn = 0;
  for (int i = 1; i <= N; i ++) {
    f[i] = f[i-1] + A[i];
  }
  for (int i = 1; i <= N; i ++) {
    minn = min(minn, f[i]);
    maxx = max(maxx, f[i] - minn);
  }
  cout << maxx;
  return 0;
}
