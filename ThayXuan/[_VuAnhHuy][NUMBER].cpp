#include <bits/stdc++.h>
using namespace std;
int N;
int t = 1;
bool ok [1000001];
long long p[1000001];
void Era()
{
    memset(ok,true,sizeof(ok));
    ok[0] = false; ok[1] = false;
    for(long long i = 2; i*i <= 1000000; i++) {
        if (ok[i]==true) {
            for(long long j = 2; i*j<= 1000000; j++) {
                ok[j*i] = false;
            }
        }
    }
    for(int i=1; i<=1000000; i++){
        if(ok[i]==true){
            t++;
            p[t]=i;
        }
    }
}
int main () {
  freopen ("NUMBER.INP","r",stdin);
  freopen ("NUMBER.OUT","w",stdout);
  Era();
  cin >> N;
  if (N == 1) {
    cout << 0;
    return 0;
  }
  int k = lower_bound(p+1,p+1+t,N) - p;
  if (p[k] != N) k --;
  int res = 0;
  for (int i = 2; i <= k; i ++) {
    int temp = p[i];
    while(temp <= N) {
      temp *= p[i];
      res ++;
    }
  }
  cout << res;

}
