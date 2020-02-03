#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
ll A, B, K, M, X, d;
ll TREE(ll d) {
  ll tree1 = (d - d/K)*A;
  ll tree2 = (d - d/M)*B;
  ll tree = tree1 + tree2;
  return tree;
}
int main () {
  cin >> A >> K >> B >> M >> X;
  ll l = 0, r = X/(A+B)*2;
  while (l <= r) {
    d = (l + r)/ 2;
    if (TREE(d) >= X)r = d - 1;
    else l = d + 1;
  }
  cout << l;
}
