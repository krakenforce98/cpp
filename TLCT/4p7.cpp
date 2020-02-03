/*Cho số nguyên dương n (n <= 10). Liệt kê tất cả các cách khác nhau đặt n dấu
ngoặc mở và n dấu ngoặc đóng đúng đắn.
VD: input : 3
    output : 5
    giải thích : có 5 cách ((())), (()()), (())(), ()(()), ()()()
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res = 0;
int n;
char a[20];
bool check(char a[], int n) {
  int t = 0;
  for (int i = 0; i <= n-1; i ++) {
    if (a[i] == '1') t ++;
    else t --;
    if (t < 0) return false;
  }
  if (t == 0) return true;

  return false;
}
// sinh xau nhi phan co ban
void binary_recursion(int i) {
  for (int j = 0; j <= 1; j ++) {
    a[i] = (char)(j + '0');
    if (i == n-1) {
      if (check(a,n) == true)
      cout << a << endl;
    }else{
      binary_recursion(i+1);
    }
  }
}
int main () {
  cin >> n;
  n *= 2;
  binary_recursion(0);
}
