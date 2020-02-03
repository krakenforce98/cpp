#include <iostream>
#include <stdio.h>
using namespace std;
long long a[201][201];
long n,m,t;
int main () {
  freopen ("SUM2D.INP","r",stdin);
  freopen ("SUM2D.OUT","w",stdout);
  cin >> m >> n >> t;

  for (int i = 1; i <= m; i ++) {
    for (int j = 1; j <= n; j ++) {
      cin >> a[i][j];
    }
  }
  for (int dem = 1; dem <= t; dem ++) {
    long long sum = 0;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = x1; i <= x2; i ++) {
      for (int j = y1; j <= y2; j ++) {
        sum += a[i][j];
      }
    }
    cout << sum << endl;
  }
}
