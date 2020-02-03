#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  float d = 100000;
  int t;
  float a,b,c;
  for (int i = 1; i <= n; i ++) {
    cin >> a >> b >> c;
    float temp = a / (c - b);
    if (temp < d) {
      d = temp;
      t = i;
    }
  }
  cout << t;
}
