#include <bits/stdc++.h>
using namespace std;

int main () {
  freopen ("SIBICE.INP","r",stdin);
  freopen ("SIBICE.OUT","w",stdout);
  float a,b;
  int n;
  cin >> n >> a >> b;
  float c = sqrt(a*a + b*b);
  float temp;
  for (int i = 1; i <= n; i ++) {
    cin >> temp;
    if (temp <= c) {
      cout << "DA" << endl;
    }else{
      cout << "NE" << endl;
    }
  }
}
