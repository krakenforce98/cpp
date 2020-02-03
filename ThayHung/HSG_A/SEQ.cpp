#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

unsigned long long mulmod(unsigned long long a,unsigned long long b,unsigned long long m)
{
    unsigned long long ans=0;
    a%=m;
    while(b)
    {
        if(b&1)ans=(ans+a)%m;
        a=(a+a)%m;
        b >>= 1;

    }
    return ans;
}
unsigned long long powmod(unsigned long long a,unsigned long long n,unsigned long long m)
{
    unsigned long long ans=1;
    a%=m;
    while(n)
    {
        if(n&1) ans=mulmod(ans,a,m);
        a=mulmod(a,a,m);
    n>>=1;
    }
    return ans;
}
int main () {
  ull n, m;
  freopen ("SEQ.INP","r",stdin);
  freopen ("SEQ.OUT","w",stdout);
  cin >> n >> m;
  ull res = mulmod(n+1,  powmod(3,n,m), m);

  cout << res;
}
