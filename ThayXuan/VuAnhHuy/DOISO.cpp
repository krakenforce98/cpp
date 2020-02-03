#include <bits/stdc++.h>
using namespace std;
typedef string bignum;
typedef long long ll;
ll digit[10] = {0};
ll sum = 0;
bignum a;
int main () {
  freopen ("DOISO.INP","r",stdin);
  freopen ("DOISO.OUT","w",stdout);
  cin >> a;
  for (ll i = 0; i <= a.length()-1; i ++) {
    sum += a[i] - '0';
  }
  if (sum % 3 != 0) {
    cout << -1;
    return 0;
  }

  for (ll i = 0; i <= a.length()-1; i ++) {
    digit[a[i]-'0'] ++;
  }
  // for (ll i = 0; i <= 9; i ++) {
  //   cout << digit[i] << endl;
  // }
  if (digit[0] == 0) {
    cout << -1;
    return 0;
  }
  for (ll i = 9; i >= 0; i --) {
    while(digit[i] > 0) {
      cout << i;
      digit[i] --;
    }
  }
}
