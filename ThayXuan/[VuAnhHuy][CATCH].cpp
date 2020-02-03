#include <bits/stdc++.h>
using namespace std;
string S;
int i, j;
bool _catch(int x, int y) {
  if (x == i - 1 && y == j -1) return true;
  if (x == i - 1 && y == j) return true;
  if (x == i - 1 && y == j + 1) return true;
  if (x == i && y == j - 1) return true;
  if (x == i && y == j) return true;
  if (x == i && y == j + 1) return true;
  if (x == i + 1 && y == j - 1) return true;
  if (x == i + 1  && y == j) return true;
  if (x == i + 1 && y == j + 1) return true;
  return false;
}
int main () {
  freopen ("CATCH.INP","r",stdin);
  freopen ("CATCH.OUT","w",stdout);
  int res = 0;
  int x = 0, y = 0;
  cin >> i >> j >> S;
  if (_catch(0,0) == true) {
    cout << 0 << endl;
    res ++;
  }
  for (int k = 0; k <= S.length() - 1; k ++) {
    if (S[k] == 'D') y --;
    if (S[k] == 'U') y ++;
    if (S[k] == 'L') x --;
    if (S[k] == 'R') x ++;
    if (_catch(x,y) == true) {
      cout << k + 1<< endl;
      res ++;
    }
  }
  if (res == 0) cout << -1;
}
