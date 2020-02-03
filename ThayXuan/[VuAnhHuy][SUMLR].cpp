#include <bits/stdc++.h>
using namespace std;

int main () {
  char temp;
  int N;
  int a[30001];
  int query;
  freopen ("SUMLR.INP","r",stdin);
  freopen ("SUMLR.OUT","w",stdout);
  cin >> N >> query;
  memset(a,0,sizeof(a));
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
