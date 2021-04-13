#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = INT_MIN, now = 0;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        now += a;
        if( now < 0 ) now = 0;
        if(ans > 0)
            ans = max(now, ans);
        else {
            ans = max(a, ans);
        }
    }
    cout << ans << '\n';
}
