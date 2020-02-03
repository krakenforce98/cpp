#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  long x[1001], y[1001];

  cin >> n;
  for (int i = 1; i <= n; i ++) {
    cin >> x[i] >> y[i];
  }
  long minx = x[1], maxx = x[1], miny = y[1], maxy = y[1];
  for (int i = 1; i <= n; i ++) {
      if (x[i] > maxx) maxx = x[i];
      if (x[i] < minx) minx = x[i];
      if (y[i] > maxy) maxy = y[i];
      if (y[i] < miny) miny = y[i];
  }
  //minx  maxy & maxx miny
  long long res = max(abs(minx-maxx), abs(miny - maxy));
  res = res * res;
  cout << res;
}
