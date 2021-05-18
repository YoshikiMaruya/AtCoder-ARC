#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long N;
	cin >> N;

	// C++ では、整数型 a, b があったとして、a / b が「a / b の商（小数点以下切り捨て）」になることに注意
	// (1LL << i) は 2 の i 乗を意味します
	long long Answer = (1LL << 60);
	for (int i = 0; i <= 60; i++) {
	  long long a = N / (1LL << i);
		long long b = i;
		long long c = N - a * (1LL << i);
		Answer = min(Answer, a + b + c);
	}
  
	cout << Answer << endl;
	return 0;
}
