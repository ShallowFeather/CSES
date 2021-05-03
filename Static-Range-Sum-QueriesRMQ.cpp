#include <bits/stdc++.h>

using namespace std;
const int MAX = 2e5 + 5;
int rmq[MAX][50];
int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> rmq[i][0];
	for(int j = 1; (1 << j) <= n; ++j)
		for(int i = 1; i + (1 << j)-1 <= n; ++i)
			rmq[i][j] = min(rmq[i][j - 1], rmq[i + (1 << (j - 1))][j - 1]);
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		int k = log2(b - a + 1);
		cout << min(rmq[a][k], rmq[b - (1 << k) + 1][k]) << '\n';
	}
}
