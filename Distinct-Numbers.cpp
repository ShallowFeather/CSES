#include <bits/stdc++.h>

using namespace std;
set<long long> se;
int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(se.count(a) == 0) ans++;
        se.insert(a);
    }
    cout << ans << '\n';
}
