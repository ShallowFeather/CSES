//TLE
#include <bits/stdc++.h>

using namespace std;

long long ans = 0;
void dfs(long long n) {
    if(n == 0){ans++; return;}
    for(int i = 0; i < 2; i++)
        dfs(n - 1);
}

int main(){
    long long n;
    cin >> n;
    dfs(n);
    cout << ans << '\n';
}
