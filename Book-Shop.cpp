#include <bits/stdc++.h>

using namespace std;
const int ma = 1e5 + 5;
int dp[1005][ma];
int w[10005], p[10005];
int main(){
	int n, x;
	cin >> n >> x;
	for(int i = 0; i < n; i++)
		cin >> w[i];
	for(int i = 0; i < n; i++)
		cin >> p[i];
	int ans = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j <= x; j++){
			if(j >= w[i]){
				dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + p[i]);
			}
			else dp[i + 1][j] = dp[i][j];
			ans = max(ans, dp[i + 1][j]);
		}
	cout << ans << '\n';
}
