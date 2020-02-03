#include <iostream>
#include <cmath>
using namespace std;

int main () {
  long long n;
  cin >> n;
  long sqr = sqrt(n);
  long long t = 0, dem = 0;
  bool cp = false;
  if (sqr*sqr == n) cp = true;
  for (long i = 1; i < sqrt(n); i ++) {
    if (n % i == 0) {
       dem += 2;
       t += i + n/i;
    }
  }
  if (cp == true) {
    dem += 1;
    t += sqr;
  }
  cout << dem << " " << t;
}
