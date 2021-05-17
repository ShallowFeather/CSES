#include <bits/stdc++.h>

using namespace std;
const int MAX = 2e5 + 5;
long long a[MAX], dp[MAX];
signed main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	dp[0] = 1;
	sort(a, a + n + 1);
	for(int i = 1; i <= n; i++){
		if(dp[i - 1] < a[i]) return cout << dp[i - 1] << '\n', 0;
		dp[i] = a[i] + dp[i - 1];
	}
	cout << dp[n];
}
