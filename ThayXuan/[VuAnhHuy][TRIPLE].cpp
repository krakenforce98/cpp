#include <bits/stdc++.h>
using namespace std;
int N;
pair <float, float> p[101];
int main () {
  freopen ("TRIPLE.INP","r",stdin);
  freopen ("TRIPLE.OUT","w",stdout);
  cin >> N;
  char a;
  int t = 1;
  long dem = 0;
  for (int i = 1; i <= N; i ++) {
    for (int j = 1; j <= N; j ++) {
      cin >> a;
      if (a != '.') {
        //cout << a << " ";
        p[t].first = j;
        p[t].second = i;
        t ++;
      }
    }
  }
  t --;
   // for (int i = 1; i <= t; i ++) {
   //   cout << p[i].first << " " << p[i].second << endl;
   // }
  for (int i = 1; i <= t; i ++) {
    for (int j = i + 1; j <= t; j ++) {
      for (int k = j + 1; k <= t; k ++) {
        //vector AB
        float xAB = p[j].first - p[i].first;
        float yAB = p[j].second - p[i].second;
        //vector BC
        float xBC = p[k].first - p[j].first;
        float yBC = p[k].second - p[j].second;
        if ((xAB == xBC && xAB == 0) || (yAB == yBC && yAB == 0)) {
          dem ++;
        }else if (xBC / xAB == yBC / yAB) {
          // cout << p[i].first << " " << p[i].second << endl;
          // cout << p[j].first << " " << p[j].second << endl;
          // cout << p[k].first << " " << p[k].second << endl;
          dem ++;
        }
      }
    }
  }
  cout << dem;
}
