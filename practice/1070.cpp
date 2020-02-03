#include <iostream>
using namespace std;

int main () {
  long n,p,k;
  cin >> n >> k >> p;
  long sale = k * p; // k + 1
  long long ans = n / (k+1) * sale + n % (k+1) * p;
  cout << ans;
}
