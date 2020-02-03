#include <bits/stdc++.h>
using namespace std;
int N, Q, a[1000001], b[1000001], c[1000001];
int main () {
  freopen ("BCOUNT.INP","r",stdin);
  freopen ("BCOUNT.OUT","w",stdout);
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));
  cin >> N >> Q;
  int temp;
  for (int i = 1; i <= N; i ++) {
    cin >> temp;
    if (temp == 1) a[i] ++;
    if (temp == 2) b[i] ++;
    if (temp == 3) c[i] ++;
  }
  for (int i = 1; i <= N; i ++) {
    a[i] += a[i-1];
    b[i] += b[i-1];
    c[i] += c[i-1];
  }
  for (int i = 1; i <= Q; i ++) {
    int l,r;
    cin >> l >> r;
    cout << a[r] - a[l-1] << " ";
    cout << b[r] - b[l-1] << " ";
    cout << c[r] - c[l-1] << endl;
  }
}
