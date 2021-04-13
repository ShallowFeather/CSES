#include <bits/stdc++.h>

using namespace std;

long long a[200005];

int main() {
    long long n, x;
    cin >> n >> x;
    vector<long long> line;
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }
    map<long, long> m;
    for(long long i = 1; i <= n; i++){
        if(m.count(x - a[i])){
            cout << i << " " <<m[x - a[i]] << '\n';
            return 0;
        }
        m[a[i]] = i;
    }
    cout << "IMPOSSIBLE" << '\n';
}
