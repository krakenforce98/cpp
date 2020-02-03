#include <bits/stdc++.h>
using namespace std;
long N;
string s;
int main () {
  freopen ("LOTARIE.INP","r",stdin);
  freopen ("LOTARIE.OUT","w",stdout);

  cin >> N >> s;
  long l = 1, t=0;
  s += '0';
  for (long i = 1; i <= N; i ++) {
    if (s[i] == s[i-1]) l ++;
    else{
      t += l/2;
      l = 1;
    }
  }
  cout << t;
  return 0;
}
