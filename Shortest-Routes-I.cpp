#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;
vector<pair<int, int>> ways[MAX];
priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long , int>>> pq;
long long dis[MAX];

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		ways[a].push_back({b, c});
	}
	memset(dis, 0x3F, sizeof(dis));
	dis[1] = 0;
	pq.push({0, 1});
	while(!pq.empty()) {
		pair<long long, int> t;
		t = pq.top();
		pq.pop();
		if(t.first > dis[t.second]) continue;
		for(auto i : ways[t.second]){
			if (dis[i.first] > dis[t.second] + i.second){
				dis[i.first] = dis[t.second] + i.second;
				pq.push({dis[i.first], i.first});
			}
		}
	}
	for(int i = 1; i <= n; i++)
		cout << dis[i] << " ";
}
