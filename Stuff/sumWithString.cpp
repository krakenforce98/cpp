#include <iostream>

using namespace std;
typedef string bigNum;
bigNum operator + (bigNum a,bigNum b)
{
    int sum,carry,x,y;
    bigNum c;
    carry=0; c="";
    while(a.length()>b.length()) b="0"+b;
    while(a.length()<b.length()) a="0"+a;
    for(int i=a.length()-1;i>=0;i--)
    {
        x=a[i]-48;
        y=b[i]-48;
        sum=carry+x+y;
        carry=sum/10;
        c=char(sum%10+48)+c;
    }
    if(carry>0) c="1"+c;
    return c;
}
int main()
{
    int m,n;
    string a,b;
    char c;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        cin>>c;
        a+=c;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        b+=c;
    }
  bigNum s=a+b;
    for(int i=0;i<=s.length()-1;i++)
        {cout<<s[i];
        if((i+1)%50==0 && (i+1)!=s.length()) cout<<endl;}
    return 0;
}
