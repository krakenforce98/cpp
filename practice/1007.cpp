#include <iostream>
using namespace std;

int main () {
  long long m,n;
  cin >> m >> n;
  long long battay, xinchao;
  battay = m*(m-1)/2;
  xinchao = m*n*2 + n*(n-1);
  cout << battay << " " << xinchao;
}
