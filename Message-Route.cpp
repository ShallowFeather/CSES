#include <bits/stdc++.h>

using namespace std;

vector<int> ways[100005];
int n, m;
bool bfs(int x){
	queue<int> qx;
	vector<int> ans;
	qx.push(x);
	while(!qx.empty()){
		int fx = qx.front();
		if(fx == n) {
			cout << ans.size() << '\n';
			for(int i = 0; i < ans.size(); i++)
				cout << ans[i] << " ";
			return true;
		}
		qx.pop(); ans.pop_back();
		for(auto &i: ways[fx]){
			ans.push_back(i);
			qx.push(i);
		}
	}
	return false;
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		ways[a].push_back(b);
		ways[b].push_back(a);
	}
	if(!bfs(1)) {
		cout << "IMPOSSIBLE" << '\n';
	}
}
