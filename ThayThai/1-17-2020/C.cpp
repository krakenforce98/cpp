#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x[31], y[31], U, V, n;
map <pair<int, int>, int> mp;
int main () {
  cin >> n;
  for (int i = 0; i < n/2; i ++) cin >> x[i] >> y[i];
  //
  int ans = 0;
  for (int i = 0; i < (1<<(n/2)); i ++) {
    int sum_x = 0, sum_y = 0;
    for (int j = 0; j < (n/2); j ++) {
      if (((i >> j) & 1) == 1) {
        sum_x += x[j];
        sum_y += y[j];
      }
    }
    mp[{sum_x, sum_y}] ++;
  }
  int m = n - n/2;
  for (int i = 0; i < m; i ++) {
    cin >> x[i] >> y[i];
  }
  cin >> U >> V;
  for (int i = 0; i < (1<<m); i ++) {
    int sum_x = 0, sum_y = 0;
    for (int j = 0; j < m; j ++) {
      if (((i >> j) & 1) == 1) {
        sum_x += x[j];
        sum_y += y[j];
      }
    }
    ans += mp[{U-sum_x,V-sum_y}];
  }
  cout << ans;
}
