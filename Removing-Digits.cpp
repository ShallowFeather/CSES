#include <bits/stdc++.h>

using namespace std;
long long dp[1000005];

int main(){
    long long n;
    cin >> n;
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for(long long i = 0; i <= n; i++){
        for(char a : to_string(i)){
            dp[i] = min(dp[i], dp[i -(a - '0')] + 1);
        }
    }
    cout << dp[n] << '\n';
}
