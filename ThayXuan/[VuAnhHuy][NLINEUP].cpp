#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;
int D[30001];
int h[30001];
int g[30001];
int main () {
   freopen ("NLINEUP.INP","r",stdin);
   freopen ("NLINEUP.OUT","w",stdout);
  int N;
  cin >> N;
  for (int i = 1; i <= N; i ++) {
    cin >> D[i];
  }
  h[0] = g[0] = f[0] = 0;
  for (int i = 1; i <= N; i ++) {
    if (D[i] == 1) {
      f[i] = 0 + f[i-1];
      g[i] = 1 + min(f[i-1],g[i-1]);
      h[i] = 1 + min(f[i-1],min(g[i-1],h[i-1]));
    }
    if (D[i] == 2) {
      f[i] = 1 + f[i-1];
      g[i] = 0 + min(f[i-1],g[i-1]);
      h[i] = 1 + min(f[i-1],min(g[i-1],h[i-1]));
    }
    if (D[i] == 3) {
      f[i] = 1 + f[i-1];
      g[i] = 1 + min(f[i-1],g[i-1]);
      h[i] = 0 + min(f[i-1],min(g[i-1],h[i-1]));
    }
  }
  int min1 = min(f[N],min(h[N],g[N]));
  for (int i = N; i >= 1; i --) {
    f[i] = g[i] = h[i] = 0;
  }
  for (int i = N; i >= 1; i --) {
    if (D[i] == 1) {
      f[i] = 0 + f[i+1];
      g[i] = 1 + min(f[i+1],g[i+1]);
      h[i] = 1 + min(f[i+1],min(g[i+1],h[i+1]));
    }
    if (D[i] == 2) {
      f[i] = 1 + f[i+1];
      g[i] = 0 + min(f[i+1],g[i+1]);
      h[i] = 1 + min(f[i+1],min(g[i+1],h[i+1]));
    }
    if (D[i] == 3) {
      f[i] = 1 + f[i+1];
      g[i] = 1 + min(f[i+1],g[i+1]);
      h[i] = 0 + min(f[i+1],min(g[i+1],h[i+1]));
    }
  }
  int min2 = min(f[1],min(g[1],h[1]));
  cout << min(min1,min2);
}
