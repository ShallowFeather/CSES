#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long a, b;
    cin >> a >> b;
    if((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b))
        cout << "YES" << '\n';
    else cout << "NO" << '\n';
}


int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
