#include <bits/stdc++.h>
using namespace std;

int main () {
  int q;
  cin >> q;
  long l,r,d;
  for (int i = 1; i <= q; i ++) {
    cin >> l >> r >> d;
    long x = d;
    long y = r + d - r%d;
    if (x >= l) {
      cout << y << endl;
    }else{
      cout << x << endl; ;
    }
  }
}
