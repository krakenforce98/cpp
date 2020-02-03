#include <iostream>
using namespace std;

int main () {
  long n,m,k;
  cin >> n >> m >> k;
  long t = k / n;
  if (m % t == 0) {
    cout << m / t;
    return 0;
  }else{
    cout << m / t + 1;
    return 0;
  }
}
