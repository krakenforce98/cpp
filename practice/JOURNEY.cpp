#include <bits/stdc++.h>
using namespace std;
long X,Y;
long x = 0, y = 0;
string s;
string sol;
int main () {
  freopen ("JOURNEY.INP","r",stdin);
  freopen ("JOURNEY.OUT","w",stdout);
  cin >> X >> Y >> s;
  long step = 0;
  for (long i = 0; i <= s.length() - 1; i ++) {
    if (s[i] == '?') {
      step ++;
    }
    if (s[i] == 'U') y ++;
    if (s[i] == 'D') y --;
    if (s[i] == 'L') x --;
    if (s[i] == 'R') x ++;
  }
  if (x < X) {
    for (long i = x; i <= X - 1; i ++) {
      sol += "R";
    }
  }
  if (x > X) {
    for (long i = x; i >= X + 1; i --) {
      sol += "L";
    }
  }
  if (y < Y) {
    for (long i = y; i <= Y - 1; i ++) {
      sol += "U";
    }
  }
  if (y > Y) {
   for (long i = y; i >= Y + 1; i --) {
     sol += "D";
   }
  }
  if (step < sol.length()) {
    cout << "IMPOSSIBLE";
    return 0;
  }
  if ((step - sol.length()) % 2 == 1) {
    cout << "IMPOSSIBLE";
    return 0;
  }
  for (long i = 1; i <= (step - sol.length())/2; i ++) {
    sol += "UD";
  }
  long t = 0;
  for (long i = 0; i <= s.length()-1; i ++) {
    if (s[i] != '?') cout << s[i];
    else{
      cout << sol[t];
      t ++;
    }
  }
}
