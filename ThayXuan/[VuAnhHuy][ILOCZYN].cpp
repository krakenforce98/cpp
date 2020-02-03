#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ILOCZYN.INP","r",stdin);
    freopen("ILOCZYN.OUT","w",stdout);
    int fibo[46];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 45; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        bool check = false;
        int n;
        cin >> n;
        for (int j = 1; j < 46; j ++){
            if (n % fibo[j] == 0){
                int tam = n / fibo[j];
                if (binary_search(fibo,fibo+46,tam)) {
                    check = true;
                    break;
                }
            }
        }
        if (check == true)
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
    }
}
