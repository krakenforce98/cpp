#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  char a[n+1][n+1];
  string s;
  int t = 0;
  cin >> s;
  for (int i = 1; i <= s.length()/n; i ++) {
    if (i % 2 == 1) {
      for (int j = 1; j <= n; j ++) {
        a[i][j] = s[t];
        t ++;
      }
    }else{
      for (int j = n; j >= 1; j --) {
        a[i][j] = s[t];
        t ++;
      }
    }
  }
  string ans;
  for (int j = 1; j <= n; j ++) {
    for (int i = 1; i <= s.length()/n; i ++) {
      ans += a[i][j];
    }
  }
  cout << ans;

}
