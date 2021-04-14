#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a;
    cin >> a;
    int ans = 1;
    for(int i = 0; i < a.size(); i++){
        if((a[i] - '0') > ans) ans = a[i] - '0';

    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
