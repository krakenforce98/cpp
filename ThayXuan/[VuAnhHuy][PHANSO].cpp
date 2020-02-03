#include <bits/stdc++.h>
using namespace std;
struct phanso {
  long long tu, mau;
};
bool compare(phanso a, phanso b) {
  return(a.tu * b.mau < b.tu * a.mau);
}
phanso arr[1000001];
int main () {
  freopen ("PHANSO.INP","r",stdin);
  freopen ("PHANSO.OUT","w",stdout);
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i ++) {
    cin >> arr[i].tu >> arr[i].mau;
  }
  sort(arr+1,arr+1+n,compare);
  cout << arr[k].tu / __gcd(arr[k].tu, arr[k].mau) << " " << arr[k].mau / __gcd(arr[k].tu, arr[k].mau);
}
