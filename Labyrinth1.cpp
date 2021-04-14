//IDK
#include <bits/stdc++.h>

using namespace std;
int n, m;
int mx[]{ 0, 0, 1, -1 }, my[]{ 1, -1. 0, 0 };
char path[]{ 'R', 'L', 'D', 'U' };
char maps[1005][1005]

bool ok(int x, int y){
    if(x == n || x < 0 || y == m || y < 0) return false;
    if(maps[x][y] == '#') return false;
    return true;
}

void bfs(int x, int y) {
    queue<int> qx, qy;
    qx.push(x); qy.push(y);
    while(qx.empty()){
        int fx = qx.front(), fy = qy.front();
        for(int i = 0; i < 4; i++){
            int nx = fx + mx[i], ny = fy + my[i];
            if(ok(nx, ny)){
                qx.push(nx); qy.push(ny);
                       
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int x, y;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> maps[i][j];
            if(maps[i][j] == 'A'){
                x = i; y = j;
            }
        }
    bfs(x, y);
}
