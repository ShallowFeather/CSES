#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
int dp[1005][1005];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
        dp[0][i] = 1;
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            char a;
            cin >> a;
            if(a == '*') dp[i][j] = 0;
            else if(i == 1){
                dp[i][j] += dp[i][j - 1];
                dp[i][j] %= mod;
            }
            else if(j == 1) {
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= mod;
            }
            else {
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= mod;
                dp[i][j] += dp[i][j - 1];
                dp[i][j] %= mod;
            }
        }
    cout << dp[n][n] << '\n';
}
