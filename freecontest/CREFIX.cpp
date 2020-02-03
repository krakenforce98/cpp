#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string S, temp, temp2;
ll a[100001];
int main () {
  cin >> S;
  for (ll i = 0; i <= S.length() - 1; i ++) {
    temp += S[i];
    ll res = 0;
    for (ll j = 0; j <= S.length() - temp.length(); j ++) {
      temp2 = S.substr(j,temp.length());
      if (temp2 == temp) res ++;
    }
    cout << res << " ";
  }
}
