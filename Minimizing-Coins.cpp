#include <bits/stdc++.h>

using namespace std;

long long dp[1000005];

int main(){
    long long n, coin;
    long long c[500];
    cin >> n >> coin;
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    memset(dp, INT_MAX, sizeof(dp));
    dp[0] = 0;
    for(int i = 1; i <= coin; i++){
        dp[i] = INT_MAX;
        for(int j = 0; j < n; j++){
            if(i >= c[j]){
                dp[i] = min(dp[i], dp[i-c[j]]+1);
            }
        }
    }
    if(dp[coin] != INT_MAX)
        cout << dp[coin] << '\n';
    else cout << -1 << '\n';
}
