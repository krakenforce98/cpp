#include <bits/stdc++.h>
using namespace std;
int x[101], y[101], n;
int main () {
  int max = 0, temp;
  cin >> n;
  for (int i = 1; i <= n; i ++) cin >> x[i] >> y[i];
  for (int i = 1; i <= n - 1; i ++) {
    for (int j = i + 1; j <= n; j ++) {
      temp = abs(x[i] - x[j]) + abs(y[i] - y[j]);
      if (temp > max) max = temp;
    }
  }
  cout << max;
}
