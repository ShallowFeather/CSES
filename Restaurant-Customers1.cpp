#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> v;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, 1));
        v.push_back(make_pair(b, -1));
    }
    sort(v.begin(), v.end());
    int now = 0, ans = 0;
    for(auto i : v){
        now += i.second;
        ans = max(ans, now);
    }
    cout << ans << '\n';
}
