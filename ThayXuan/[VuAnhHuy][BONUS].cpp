#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll final;
ll m = 111539768;
ll n,k,y,v;
long long poww(long long a, long long b) {
  if (b == 0) return 1%m;

  if (b == 1) return a%m;

  long long ans = poww(a,b/2) % m;

  if (b % 2 == 0) {

    return ((ans%m) * (ans%m))%m;

  }else{

    return (((ans%m) * (ans%m))%m * (a%m))%m;

  }
}

long long calsum(long long a, long long n)
{   if(n == 0) return 0;
    if(n == 1) return a;
    if(n == 2) return ((a%m)+poww(a,2))%m;
    long long tmp=calsum(a,n/2)%m;
    if(n%2 == 0) return (tmp * ((poww(a,n/2) + 1)%m))%m;
    else return ((tmp * ((poww(a,n/2) + 1)%m))%m + (poww(a,n)%m))%m;
}
int main () {
  //freopen ("BONUS.INP","r",stdin);
  //freopen ("BONUS.OUT","w",stdout);
  // 1 5 25 125
  cin >> n >> k >> y >> v;
  final = (1 + calsum(k,v-y)%m) * (poww(k,y-1)%m);
  cout << final % m;
  // if (y == v) {
  //   final = poww(k,v-1,m)%m;
  //   cout << final;
  //   return 0;
  // }
  //
  // if (y == 1) {
  //   ans1 = 0;
  // }else if (y == 2){
  //   ans1 = 1;
  // }else{
  //   ans1 = (calsum(k,y-2,m)%m + 1%m)%m;
  // }
  // ans2 = (calsum(k,v-1,m)%m + 1%m)%m;
  // final = (ans2 - ans1)%m;
  // cout << final;
}
