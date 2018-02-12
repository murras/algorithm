// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
int a[50][50], b[50][50];
void flip(int x, int y) {
	for (int i = x - 1; i <= x + 1; i++) 
		for (int j = y - 1; j <= y + 1; j++)
			a[i][j] = 1 - a[i][j];
}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &a[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &b[i][j]);
	int result = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				result++;
				flip(i + 1, j + 1);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) {
				printf("-1\n");
				return 0;
			}
		}
	}
	printf("%d\n", result);
}