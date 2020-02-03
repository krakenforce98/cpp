#include <iostream>
using namespace std;
long sum(long x) {
  long c = 0;
  while (x > 0) {
    c += x%10;
    x/=10;
  }
  return c;
}
int main () {
  long n;
  cin >> n;
  for (long i = n; i >= 1; i --) {
    if (sum(i) + i == n) {
      cout << i;
      return 0;
    }
  }
}
