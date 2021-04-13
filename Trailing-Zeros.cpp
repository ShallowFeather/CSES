#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    long long ans = 0;
    cin >> n;
    while( n > 0 ){
        ans += n/5;
        n /= 5;
    }
    cout << ans << '\n';
}
