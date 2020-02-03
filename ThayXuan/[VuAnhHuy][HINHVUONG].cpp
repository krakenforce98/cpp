#include <iostream>
#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
pair<ll, ll> _input[5], A, B, C, D;

ll _abs(ll x, ll y) {
  ll temp = x - y;
  if (temp <= 0) return -temp;
  return temp;
}
int main () {
  freopen ("HINHVUONG.INP","r",stdin);
  freopen ("HINHVUONG.OUT","w",stdout);
  for (int i = 1; i <= 4; i ++) cin >> _input[i].first >> _input[i].second;
  sort(_input + 1, _input + 5);
  A = _input[1];
  B = _input[2];
  D = _input[3];
  C = _input[4];
  bool check = true;
  if (_abs(A.first, D.first) != _abs(A.second, B.second)) check = false;
  if (_abs(A.second, B.second) != _abs(C.first, B.first)) check = false;
  if (_abs(C.first, B.first) != _abs(C.second, D.second)) check = false;
  if (_abs(C.second, D.second) != _abs(A.first, D.first)) check = false;
  if (check == false) cout << -1;
  else cout << _abs(A.first, D.first) *  _abs(A.first, D.first);
}
