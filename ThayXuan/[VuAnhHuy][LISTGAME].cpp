#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
bool ok [40000001];
ll P[40000001], i, X, res = 0;
long t = 0;
void Era() {
    memset(ok,true,sizeof(ok));
    ok[0] = false; ok[1] = false;
    for(i = 2; i*i <= 40000000; i++) {
        if (ok[i]==true) {
            for(ll j = 2; i * j <= 40000000; j++) {
                ok[j*i] = false;
            }
        }
    }
    for (ll j = 2; j <= 40000000; j ++) {
      if (ok[j] == true) {
        t ++;
        P[t] = j;
      }
    }
}
int main () {
  freopen ("LISTGAME.INP","r",stdin);
  freopen ("LISTGAME.OUT","w",stdout);

  Era();
  cin >> X;
  for (ll j = 1; j <= t; j ++) {
    if (X == 1) break;
    if (X % P[j] == 0) {
      while (X % P[j] == 0) {
        X /= P[j];
        res ++;
      }
    }
  }
  if (res == 0) res = 1;
  cout << res;
}
