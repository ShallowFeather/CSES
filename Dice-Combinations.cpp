#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;
long long dp[1000005];

int main(){
    long long n;
    cin >> n;
    dp[1] = 1;
    for(int i = 2; i <= 6; i++){
        dp[i] = dp[i - 1] * 2;
    }
    for(int i = 7; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6];
        dp[i] %= mod;
    }
    cout << dp[n] << '\n';
}
