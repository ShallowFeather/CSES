#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;
long long c[10000005];
long long dp[10000005];
int main(){
    long long n, x;
    dp[0] = 1;
    cin >> n >> x;
    for(long long i = 0; i < n; i++)
        cin >> c[i];
    for(long long j = 0; j < n; j++)
        for(long long i = 0; i <= x; i++)
            if(i >= c[j]){
                dp[i] += dp[i - c[j]];
                dp[i] %= mod; 
            }
    cout << dp[x] << '\n';
}
