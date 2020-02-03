#include <bits/stdc++.h>
using namespace std;

int main () {
  char a;
  cin >> a;
  char b = (char) (a + 1);
  if (a == 'z') {
    cout << 'a';
    return 0;
  }
  cout << b;
}
