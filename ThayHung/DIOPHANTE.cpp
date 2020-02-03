#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
int main () {
  freopen ("DIOPHANTE.INP","r",stdin);
  freopen ("DIOPHANTE.OUT","w",stdout);
  long long dem = 0;
  cin >> a >> b >> c;
  for (long long i = 1; i*a < c; i ++) {
    if ((c - i*a) % b == 0) dem ++;
  }
  cout << dem;
}
