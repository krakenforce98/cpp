#include <bits/stdc++.h>

using namespace std;
long long c,n,t,m=1e9+7,ans;
long long  power(long long a, long long n)
{
    if(n == 0) return 1;
    if(n == 1) return a%m;
    long long tmp = power(a, n/2);
    return (n & 1) ? (((tmp%m) * (tmp%m))%m * (a%m))%m : ((tmp%m) * (tmp%m))%m;
}

int main()
{
    freopen("NUMBER.INP","r",stdin);
    freopen("NUMBER.OUT","w",stdout);
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>c;
        //C*pow2(5,n-1) - (1-pow2(5,n-1)/-4)*16
        ans = ((c % m) * power(5,n-1))%m - (((1-power(5,n-1))%m) * power(4,m-2)*16)%m;
        cout << ans % m << endl;
    }
    return 0;
}
