//dfs
#include <bits/stdc++.h>

using namespace std;
int n, m;
char maps[1005][1005];
int mx[]{ 0, 0, 1, -1 }, my[]{ 1, -1, 0, 0 };
char path[] { 'R', 'L', 'D', 'U' };

//out
vector<char> ans;
int counter = 0;
bool check = false;

bool ok(int x, int y) {
    if(x == n || x < 0 || y == m || y < 0) return 0;
    if(maps[x][y] == '#') return 0;
    return true;
}

void out(){
    check = true;
    cout << "YES" << '\n';
    cout << counter << '\n';
    for(auto i : ans) {
        cout << i;
    }
    cout << '\n';
}

void dfs(int x, int y) {
    maps[x][y] = '#';
    for(int i = 0; i < 4; i++){
        if(ok(x + mx[i], y + my[i])){
            counter++;
            ans.push_back(path[i]);
            if(maps[x + mx[i]][y + my[i]] == 'B' && check == false) {
                out();
                return;
            }
            maps[x + mx[i]][y + my[i]] = '#';
            dfs(x + mx[i], y + my[i]);
          // maps[x + mx[i]][y + my[i]] = '.';
            counter--;
            ans.pop_back();
        }
    }
}

int main(){
    int x, y;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> maps[i][j];
            if(maps[i][j] == 'A'){
                x = i; y = j;
            }
        }
    dfs(x, y);
    if(check == false){
        cout << "NO" << '\n';
    }
}
