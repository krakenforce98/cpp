#include <bits/stdc++.h>
using namespace std;
char m[101][101];

int main () {
  memset(m, '1', sizeof(m));
  int a,b,k,r,s,p,t;
  cin >> a >> b >> k;
  for (int i = 1; i <= k; i ++) {
    cin >> r >> s >> p >> t;
    int x1 = r - p/2;
    int x2 = r + p/2;
    int y1 = s - p/2;
    int y2 = s + p/2;
    for (int dem1 = x1; dem1 <= x2; dem1 ++) {
      for (int dem2 = y1; dem2 <= y2; dem2 ++) {
        if (m[dem1][dem2] == '1')
          m[dem1][dem2] = '0';
        else if (m[dem1][dem2] == '0' && t == 1) {
          m[dem1][dem2] = 'c';
        }else if (t == 0) {
          m[dem1][dem2] = 'g';
        }
      }
    }
  }
    int gef  = 0, possible = 0;
    for (int i = 1; i <= a; i ++) {
      for (int j = 1; j <= b; j ++) {
        if (m[i][j] == '1') gef ++;
        if (m[i][j] == 'c') possible ++;
      }
    }
  if (possible == 0) {
    cout << gef;
  }else{
    cout << possible;
  }
  return 0;
}
