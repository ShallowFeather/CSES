#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 5;
long long bit[MAX], n;
long long a, b, u;
void update(int i, int val){
	while(i <= n){
		bit[i] += val;
		i += i &(-i);
	}
}

long long query(int x) {
	long long ret = 0;
	while(x) {
		ret += bit[x];
		x -= x & (-x);
	}
	return ret;
}


int main() {
	int q;
	cin >> n >> q;
	long long pre = 0;
	for(int i = 1; i <= n; i++){
		long long a;
		cin >> a;
		update(i, a - pre);
		pre = a;
	}
	for(int i = 0; i < q; i++) {
		int op;
		cin >> op;
		if(op == 1){
			cin >> a >> b >> u;
			update(a, u);
			update(b + 1, -u);
		}
		else {
			cin >> a;
			cout << query(a) << '\n';
		}
	}
}
