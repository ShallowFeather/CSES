#include <bits/stdc++.h>

using namespace std;
int room[2000005];
int color[200005]{ 0 };
int ask[2000005];
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> ask[i];
    for(int i = 0; i < m; i++){
        cin >> room[i];
    }
    int ans = 0;
    sort(room, room + m);
    sort(ask, ask + n);
    int i = 0, j = 0;
    while(i < n && j < m){
        if(abs(room[j] - ask[i]) <= k){
            i++;
            j++;
            ans++;
        }
        else if(room[j] < ask[i]){
            j++;
        }
        else {
            i++;
        }
    }
    cout << ans << '\n';
}
