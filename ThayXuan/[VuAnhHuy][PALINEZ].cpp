#include <bits/stdc++.h>
using namespace std;
bool doixung(string s)
{
    for (int i=0; i<=s.length()/2; i++)
        if (s[i]!=s[s.length()-i-1])
            return 0;
    return 1;
}
int main () {
  freopen ("PALINEZ.INP","r",stdin);
  freopen ("PALINEZ.OUT","w",stdout);
  string s;
  cin >> s;
  int len = s.length() - 1;
  int m;
  cin >> m;
  for (int i = 1; i <= m; i ++) {
    int a,b;
    cin >> a >> b;
    a--;b--;
    string s2 = s.substr(a,b-a+1);
    if (doixung(s2) == true) {
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}
