#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;

long long pow2(long long a, long long n)
{
	if (n == 0) return 1;
	if (n == 1) return a;
	long long tg = pow2(a, n / 2);
	tg = (tg * tg);
	if (n % 2 == 0) return tg;
	else return ((a) * tg);
}

bool isPowerOfTwo(int x)
{
	long long temp = log2(x);
	if (pow2(2, temp) == x) {
		return true;
	}
	else {
		return false;
	}
}

bool differAtOneBit(int a, int b)
{
	return isPowerOfTwo(a ^ b);
}

int in[100001];
int gt[1001], ts[1001];
long N;

int main() {
	//freopen("GEN.INP", "r", stdin);
	//freopen("GEN.OUT", "w", stdout);
	cin >> N;
	for (long i = 1; i <= N; i ++) {
		cin >> in[i];
	}
	for (int i = 1; i <= 1000; i++) {
		ts[i]=1;
	}
	sort(in + 1, in + 1 + N);
	int count = 1;
	gt[0] = 1234;
	for (long i = 1; i <= N; i++) {
		if (in[i] != in[i - 1]) {
			gt[count] = in[i];
			count++;
		}
		else {
			count--;
			ts[count]++;
			count++;
		}
	}
	count--;
	int ans = 0;
	for (int i = 1; i <= count; i++) {
    ans += ts[i] * (ts[i] - 1) / 2;
		for (int j = i + 1; j <= count; j++) {
			if (differAtOneBit(gt[i], gt[j]) == true) {
				ans += ts[i] * ts[j];
			}
		}
	}
	cout << ans;

}
