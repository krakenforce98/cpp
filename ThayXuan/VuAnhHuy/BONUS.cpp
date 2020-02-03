#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 111539768,n,k,y,v;;
ll  power(ll a, ll n)
{
    if(n == 0) return 1;
    if(n == 1) return a%m;
    ll tmp = power(a, n/2);
    return (n & 1) ? (((tmp%m) * (tmp%m))%m * (a%m))%m : ((tmp%m) * (tmp%m))%m;
}
int main () {
  freopen ("BONUS.INP","r",stdin);
  freopen ("BONUS.OUT","w",stdout);
  cin >> n >> k >> y >> v;
  ll ans1 = (power(k,y-1) * ((1%m - power(k,v-y+1)%m)%m))%m;
  ans1 /= (1-k);
  cout << ans1;
}
