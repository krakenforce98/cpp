#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}
int binaryNum[32];
int i = 0;
void decToBinary(int n)
{

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
}

int main () {
  long long a[33];
  a[0] = 1;
  a[1] = 2;
  for (int i = 2; i <= 32; i ++) {
    a[i] = a[i-1]*2;
  }
  int min = 32, max = 0, k;
  cin >> k;
  if (isPowerOfTwo(k) == true) {
    cout << k << " " << 0;
    return 0;
  }
  decToBinary(k);
  for (int j = 0; j <= i; j ++) {
    if (binaryNum[j] == 1) {
      min = j;
      break;
    }
  }
  for (int j = i; j >= 0; j --) {
    if (binaryNum[j] == 1) {
      max = j;
      break;
    }
  }
  cout << a[lower_bound(a+1,a+1+32,k) - a]<< " ";
  cout << log2((pow(2,max) / pow(2,min))) + 1;
}
