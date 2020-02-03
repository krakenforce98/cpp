#include <bits/stdc++.h>
using namespace std;
bool ok [1000001];
long long p[1000001];
long long i;
long t = 1;
bool check (long long m) {
  long long g = sqrt(m);
  if (g * g == m) {
    return true;
  }else{
    return false;
  }
}
void Era() {
    memset(ok,true,sizeof(ok));
    ok[0] = false; ok[1] = false;
    for(i = 2; i*i <= 1000000; i++) {
        if (ok[i]==true) {
            for(long long j = 2; i * j <= 1000000; j++) {
                ok[j*i] = false;
            }
        }
    }
}
int main () {
  //freopen ("SNT.INP","r",stdin);
  //freopen ("SNT.OUT","w",stdout);
  Era();
  t --;
  int n;
  cin >> n;
  long long temp;
  for (int i = 1; i <= n; i ++) {
    cin >> temp;
    if (check(temp) == false) {
      cout << "NO" << endl;
    }else{
      long long g = sqrt(temp);
      if (ok[g] == true) {
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }
  }
}
