#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main () {
  freopen ("CHIAHET.INP","r",stdin);
  freopen ("CHIAHET.OUT","w",stdout);
  ll n;
  cin >> n;
  ll d2 = n / 2;
  ll d3 = n / 3;
  ll d5 = n / 5;
  ll d7 = n / 7;

  ll d6 = n / 6;
  ll d10 = n / 10;
  ll d14 = n / 14;
  ll d15 = n / 15;
  ll d21 = n / 21;
  ll d35 = n / 35;

  ll d30 = n / 30;
  ll d42 = n / 42;
  ll d70 = n / 70;
  ll d105 = n / 105;

  ll d210 = n / 210;

  ll ans = (d2 + d3 + d5 + d7) - (d6 + d10 + d14 + d15 + d21 + d35) + (d30 + d42 + d70 + d105) - d210;
  ll res = n - ans;
  cout << res;
}
