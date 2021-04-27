#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e4 + 5;
long long dp[MAX][MAX];

int main(){
	long long n, m;
	cin >> n >> m;
	long long in;
	cin >> in;
	if(in == 0){
		for(int i = 1; i <= m; i++){
			dp[0][i] = 1;
		}
	}
	else dp[0][in] = 1;
	for(int i = 1; i < n; i++){
		int a;
		cin >> a;
		if(a){
			dp[i][a] += dp[i - 1][a - 1];
			dp[i][a] += dp[i - 1][a];
			dp[i][a] += dp[i - 1][a + 1];
		}
		else {
			for(int j = 1; j <= m; j++){
				dp[i][j] += dp[i - 1][j - 1];
				dp[i][j] += dp[i - 1][j];
				dp[i][j] += dp[i - 1][j + 1];
			}
		}
	}
	long long ans = 0;
	for(int i = 1; i <= m; i++)
		ans += dp[n - 1][i];
	cout << ans;
}
