#include <bits/stdc++.h>

using namespace std;
long long n,a[100001],p;

int main()
{
    freopen("MAXPROD.INP","r",stdin);
    freopen("MAXPROD.OUT","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    p=max(a[1]*a[2],a[n]*a[n-1]);
    cout<<p;
    return 0;
}
