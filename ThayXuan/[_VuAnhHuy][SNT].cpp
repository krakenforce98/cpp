#include <bits/stdc++.h>
using namespace std;
bool ok [1000001];
long long n, a[100001];
long long i;
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
  freopen ("SNT.INP","r",stdin);
  freopen ("SNT.OUT","w",stdout);
  Era();
  cin >> n;
  for (int i = 1; i <= n; i ++) cin >> a[i];
  for (int i = 1; i <= n; i ++) {
    if (a[i] == 1) {
      cout << "NO" << endl;
    }else{
      if (check(a[i]) == true && ok[(long long)sqrt(a[i])] == true) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }
}
