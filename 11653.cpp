// 알고리즘 기초 4 p.66
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 2; i*i <= n; i++) {
		while (n%i == 0) {
			cout << i << '\n';
			n /= i;
		}
	}
	if (n > 1) {
		cout << n << '\n';
	}
}