#include <bits/stdc++.h>
using namespace std;
struct phanso {
  int tu, mau;
};
bool compare(phanso a, phanso b) {
  return(a.tu * b.mau < b.tu * a.mau);
}
bool co_prime(int x, int y) {
  if (__gcd(x,y) == 1) return true;
  return false;
}
phanso arr[1000001];
int main () {
  // freopen ("HUUTI.INP","r",stdin);
  // freopen ("HUUTI.OUT","w",stdout);
  arr[1].tu = 0;
  arr[1].mau = 1;
  int n, cnt = 2;
  int k;
  cin >> n >> k;
  for (int i = 1; i <= n; i ++) {
    for (int j = i; j <= n; j ++) {
      if (co_prime(i,j) == true) {
        arr[cnt].tu = i;
        arr[cnt].mau = j;
        cnt ++;
      }
    }
  }
  cnt --;
  sort(arr+1,arr+1+cnt,compare);
  cout << cnt << endl;
  cout << arr[k].tu <<" " << arr[k].mau;
}
