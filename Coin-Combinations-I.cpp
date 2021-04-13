#include <bits/stdc++.h>

using namespace std;

long long dp[1000005], c[1000005];
const long long mod = 1e9 + 7;
int main(){
    long long n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> c[i];
    dp[0] = 1;
    for(long long i = 1; i <= x; i++)
        for(long long j = 0; j < n; j++){
            if(i >= c[j]){
                dp[i] += dp[i - c[j]];
                dp[i] %= mod;
            }
        }
    cout << dp[x];
}
