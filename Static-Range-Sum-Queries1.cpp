#include <bits/stdc++.h>

using namespace std;
int n, m, line[50005];
int rmq[500005][50];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
                    
    for(int i = 1; i <= n; i++)
        cin >> rmq[i][0];
                        
                        
                        /*for(int i = 1;  i <= n; i++)
                         *         rmq[i][0] = line[i];*/
                    
    for(int j = 1; (1<<j) <= n; ++j){
        for(int i= 1; i + (1 << j)-1 <= n; ++i)
            rmq[i][j] = max(rmq[i][j - 1], rmq[i +(1 << (j - 1))][j - 1]);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
                                            int a, b;
                                                    cin >> a >> b;
                                                            if(a > b) swap(a, b);
                                                                    int k = log2(b - a + 1);
                                                                            cout << max(rmq[a][k], rmq[b - (1 << k)+1][k]) << '\n';
                                                                                }
}
