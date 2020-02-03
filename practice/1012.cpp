#include <iostream>
using namespace std;

int main () {
  float a,b,c,d;
  cin >> a >> b >> c >> d;
  float m0,m1,m2,m3;
  m0 = a/c + b/d;
  m1 = c/d + a/b;
  m2 = d/b + c/a;
  m3 = b/a + d/c;
  float z = max(max(m0,m3),max(m1,m2));
  if (z == m0){
    cout << 0; return 0;
  }else if (z == m1) {
    cout << 1; return 0;
  }else if (z == m2) {
    cout << 2; return 0;
  }else if (z == m3) {
    cout << 3; return 0;
  }
  return 0;
}
