#include <bits/stdc++.h>
using namespace std;
bool ok [1000001];
long long p[1000001], num = 1e9 + 7, f[1000001], ff[1000001];
long t = 1, T, ll, rr, l, r;
void Era()
{
    memset(ok,true,sizeof(ok));
    ok[0] = false; ok[1] = false;
    for(long i = 2; i*i <= 1000000; i++) {
        if (ok[i]==true) {
            for(long j = 2; i*j<= 1000000; j++) {
                ok[j*i] = false;
            }
        }
    }
    for(int i = 1; i<= 1000000; i++){
        if(ok[i]==true){
            p[t]=i;
            t++;
        }
    }
}
int main () {
  //freopen ("PRIME.INP","r",stdin);
  //freopen ("PRIME.OUT","w",stdout);
  Era(); t --;
  cin >> T;

  for (int i = 1; i <= T; i ++) {
    cin >> ll >> rr;
    l = min(ll, rr);
    r = max(ll, rr);

  }

}
