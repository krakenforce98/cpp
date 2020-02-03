#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull A[1000001] = {0}, K, H;
int N;
int main () {
  //freopen ("VLN.INP","r",stdin);
  //freopen ("VLN.OUT","w",stdout);
  cin >> N >> K >> H;
  for (int i = 1; i <= N; i ++) cin >> A[i];

  ull max = 0, range, res;
  range = (H * 2 + 1 ) / K;
  if ((H * 2 + 1) % K != 0) range ++;
  // cout << range << endl;
  for (int i = 1; i <= N; i ++) {
    A[i] += A[i-1];
  }
  //cout << range << endl;
  if (N <= range) {
    max = A[N];
    cout << max;
    return 0;
  }
  for (int i = N; i >= range; i --) {
    res = A[i] - A[i-range];
    if (res > max) max = res;
  }
  cout << max;
  return 0;
}
