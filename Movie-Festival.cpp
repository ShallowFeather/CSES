#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[200005];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].second >> a[i].first;
    }
    sort(a, a + n);
    int now = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(now <= a[i].second){
            ans++;
            now = a[i].first;
        }
    }
    cout << ans << '\n';
}
