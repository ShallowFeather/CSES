#include <bits/stdc++.h>

using namespace std;
int n, m;
char maps[1005][1005];
int mx[]{ 0, 0, 1, -1 }, my[]{ 1, -1, 0, 0 };
bool ok(int x, int y){
    if(x == n || x < 0 || y == m || y < 0) return 0;
    if(maps[x][y] == '#') return 0;
    return true;
}

void dfs(int x, int y){
    maps[x][y] = '#';
    for(int i = 0; i < 4; i++){
        if(ok(x + mx[i], y + my[i]))
            dfs(x + mx[i], y + my[i]);
    }
}

int main(){
    int ans = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> maps[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(maps[i][j] == '.'){
                ans++;
                dfs(i, j);
            }
        }
    cout << ans << '\n';
}
