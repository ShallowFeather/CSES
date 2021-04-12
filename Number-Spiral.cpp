#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x, y;
    cin >> x >> y;
    long long ans = 0, a = max(x, y), b = (a - 1) * (a - 1);
    if(a % 2 == 0){
        if (a == y) ans = b + x;
        else ans = b + 2 * a - y;
    }
    else {
        if (a == x) ans = b + y;
        else ans = b + 2 * a - x;
    }
    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
