//map TLE
#include <bits/stdc++.h>

using namespace std;
unordered_map<long long, long long> p;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    long long m = 0;
    long long a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p[a]++;
        p[b]--;
        m = max(m, b);
    }
    long long now = 0, ans = 0;
    for(int i = 1; i < m; i++){
        now += p[i];
        ans = max(now, ans);
    }
    cout << ans << '\n';
}
