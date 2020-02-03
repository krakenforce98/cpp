#include <bits/stdc++.h>
using namespace std;
long long a[1001];
int N;
int main () {
  freopen ("MAXSUM.INP","r",stdin);
  freopen ("MAXSUM.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) {
    cin >> a[i];
  }
  long long tong = 0;
  for (int i = 1; i <= N; i ++) {
    if (a[i] >= 0) {
      tong += a[i];
    }
  }
  long long ans = tong * 2;
  cout << ans;
}
