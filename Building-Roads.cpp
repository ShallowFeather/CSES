#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5 + 5;
vector<int > g[maxn] , vis(maxn, 0);

void dfs(int n){
    vis[n] = true;
    for(auto &i : g[n])
        if(!vis[i])
            dfs(i);
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs( i );
        }
    }
    cout << ans.size() - 1<< '\n';
    for(int i = 0; i < int(ans.size()) - 1; i++){
        cout << ans[i] <<" " <<ans[i + 1] << '\n';
    }
}
