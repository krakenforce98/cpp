#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct road {
  ll h,s;
};
road arr1[100001];//day giam
road arr2[100001];// day tang
road arr[100001];
int main () {
  freopen ("ROBOT.INP","r",stdin);
  freopen ("ROBOT.OUT","w",stdout);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i ++) {
    cin >> arr[i].h;
    arr1[i].h = arr[i].h;
    arr2[i].h = arr1[i].h;
  }
  for (int i = 1; i <= n; i ++) {
    cin >> arr[i].s;
    arr1[i].s = arr[i].s;
    arr2[i].s = arr1[i].s;
  }
  ll max1 = arr1[1].s;
  ll max2 = arr2[1].s;
  for (int i = 1; i <= n; i ++) {
      if (arr1[i].h < arr1[i-1].h) {
        arr1[i].s = max(arr[i].s + arr1[i-1].s, arr1[i].s);
      }
      if (arr1[i].s > max1) max1 = arr1[i].s;
  }
  for (int i = 1; i <= n; i ++) {
      if (arr2[i].h > arr2[i-1].h) {
        arr2[i].s = max(arr2[i].s + arr2[i-1].s, arr2[i].s);
      }
      if (arr2[i].s > max2) max2 = arr2[i].s;
  }
  cout << max(max1, max2);
}
