#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll C, _K, K = 1;
int main () {
  freopen ("MRBEEN.INP","r",stdin);
  freopen ("MRBEEN.OUT","w",stdout);
  cin >> C >> _K;
  for (int i = 1; i <=_K; ++i) K *= 10;
  ll du = C % K;
  if (du >= K / 2) {
    C += K - (C % K);
  }else{
    C -= C % K;
  }
  cout << C;
}
