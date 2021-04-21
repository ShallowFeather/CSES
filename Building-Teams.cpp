#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e5 + 5;
int peo[MAX];
vector<int> ways[MAX];

int find(int x) {
	if(peo[x] == x) return x;
	int root = find(x);
	peo[x] = root;
	return root;
}

void link(int x, int y) {
	int a = find(x);
	int b = find(y);
	peo[a] = b;
}

int main(){
	int p, e;
	cin >> p >> e;
	for(int i = 1; i <= p; i++)
		peo[i] = i;
	for(int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		link(a, b);
	}
	for(int i = 1; i <= p; i++)
		cout << peo[i] << " ";
}
