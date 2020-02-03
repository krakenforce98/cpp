#include <bits/stdc++.h>
using namespace std;

int main () {
  int m,n;
  cin >> m >> n;
  if (m % 2 == 0 && n % 2 == 0) {
    cout << m * n / 4;
    return 0;
  }
  if (m % 2 == 1 && n % 2 == 0) {
    int park = (m - 1)*n/4;
    park += n / 2;
    cout << park;
    return 0;
  }
  if (n % 2 == 1 && m % 2 == 0) {
    int park = (n - 1)*m/4;
    park += m / 2;
    cout << park;
    return 0;
  }
  if (n % 2 == 1 && m % 2 == 1) {
    int park = (n-1)*(m-1)/4;
    park += (m-1)/2 + (n-1)/2 + 1;
    cout << park;
  }
}
