#include <bits/stdc++.h>
using namespace std;
int n, step = 0;
string s1, s2;
int main () {
  cin >> n >> s1 >> s2;
  s1 = "0" + s1;
  s2 = "0" + s2;
  for (int i = 1; i <= n; i ++) {
    int a = s1[i] - '0', b = s2[i] - '0';
    if (a < b) step += min(10 + a - b, b - a);
    else step += min(10 + b - a, a - b);
  }
  cout << step;
}
