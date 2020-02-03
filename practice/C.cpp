#include <bits/stdc++.h>
using namespace std;

int cmp(string a, string b) {
  while (a.length() < b.length()) a = '0' + a;
  while (a.length() > b.length()) b = '0' + b;
  if (a > b) return 1;
  if (a < b) return -1;
  if (a == b) return 0;
  return 0;
}
int main () {
  string s;  char a;
  cin >> s >> a;
  string origin = s;
  string MAX = s+a, MIN = s+a;
  for (int i = 0; i <= origin.length(); i ++) {
    origin.insert(1,a);
    if (cmp(temp,MAX) == 1) {
      MAX = temp;
    }
    if (cmp(temp,MIN) == -1) {
      MIN = temp;
    }
  }
  cout << MIN << " " << MAX;
}
