#include <iostream>
using namespace std;

int main () {
  long long n,m,k;
  cin >> n >> k;
  while (k % n != 0) {
    m = k % n;
    k = m + n;
    n = m;
  }
  cout << n;
}
