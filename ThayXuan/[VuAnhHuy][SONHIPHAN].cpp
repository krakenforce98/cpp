#include <bits/stdc++.h>
using namespace std;
long long pow2(long long n, long long m) {

  if (m == 0) return 1;

  if (m == 1) return n;

  long long ans = pow2(n, m/2);

  if (m % 2 == 0) {

    return ans * ans;

  }else{

    return ans * ans * n;

  }
}
int main () {
  freopen ("SONHIPHAN.INP","r",stdin);
  freopen ("SONHIPHAN.OUT","w",stdout);
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  long long ans = 0;
  for (int i = 0; i <= s.length() - 1; i ++) {
    if (s[i] == '1') {
      ans += pow2(2,i);
    }
  }
  cout << ans;

}
