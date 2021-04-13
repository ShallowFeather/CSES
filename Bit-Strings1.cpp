//AC
#include <bits/stdc++.h>

using namespace std;
long long int mod = 1e9+7;
int main(){
    long long n;
    cin >> n;
    long long ans = 1;
    while(n != 0){
        ans = (ans << 1) % mod;
        n--;
    }
    cout << ans << '\n';
}
