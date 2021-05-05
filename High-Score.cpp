#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 5;
int node[MAX];

typedef struct edge {
	int a, b, value;
} K;

bool cmp(const K & a, const K & b){
	return a.value < b.value;
}

int find(int x){
	if(x == node[x]) return x;
	return find(node[x]);
}

bool combine(int a, int b) {
	int x = find(a);
	int y = find(b);
	if(x == y) return false;
	else if(rank[x] >= rank[y]){
		node[y] = x;
		rank[x] += rank[y];
	}
	else {
		node[x] = y;
		rank[y] += rank[x];
	}
	return true;
}

int main(){
	int n, m;
	cin >> n >> m;
	K G[n];
	int total = 0, ans = 0;
	bool flag = false;
	for(int i = 1; i <= n; i++){
		node[i] = i;
		rank[i] = 0;
	}
	for(int i = 1; i <= m; i++) {
		cin >> G[i].a >> G[i].b  >> G[i].value;
	}
	sort(G + 1, G + 1 + m, cmp);
	for(int i = 1; i <= m; i++) {
		if(combine(G[i].a, G[i].b)) {
			total++;
			ans += G[i].value;
		}
		if(total == n - 1) {
			flag = true;
			break;
		}
	}
}
