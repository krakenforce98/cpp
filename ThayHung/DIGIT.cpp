#include <bits/stdc++.h>
using namespace std;

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
unsigned long long a,b,k;
int main()
{
    freopen("DIGIT.INP","r",stdin);
    freopen("DIGIT.OUT","w",stdout);

    cin>>a>>b>>k;
    a=mulmod(a,powmod(10,k-1,b),b);
    cout<<(a*10)/b;

    return 0;
}
