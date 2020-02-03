#include <bits/stdc++.h>
using namespace std;

int main () {
  char temp;
  int N;
  int a[30001];
  int query;
  freopen ("SUMLR2.INP","r",stdin);
  freopen ("SUMLR2.OUT","w",stdout);
  cin >> N >> query;
  for (int i = 1; i <= N; i ++) {
    a[i] = i;
  }
  for (int i = 1; i <= query; i ++) {
    cin >> temp;
    if (temp == 'D') {
      int pos;
      cin >> pos;
      cin >> a[pos];
    }else{
      long sum = 0;
      int l,r;
      cin >> l >> r;
      for (int j = l; j <= r; j ++) {
        sum += a[j];
      }
      cout << sum << endl;
    }
  }
}
