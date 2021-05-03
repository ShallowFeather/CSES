#include <bits/stdc++.h>

using namespace std;
const int MAX = 2e5 + 5;
long long arr[MAX], tree[4 * MAX];

void build(int index, int l, int r) {
	if(l == r) {
		tree[index] = arr[l];
		return;
	}
	int m = (l + r) / 2;
	build(index * 2, l, m);
	build(index * 2 + 1, m + 1, r);
	tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

long long query(int ql, int qr, int index, int l, int r) {
	if(ql <= l && r <= qr){
		return tree[index];
	}
	int m = (l + r) / 2;
	if(qr <= m) return query(ql, qr, index * 2, l, m);
	if(ql > m) return query(ql, qr, index * 2 + 1, m + 1, r);
	return query(ql, qr, index * 2, l, m) + query(ql, qr, index * 2 + 1, m + 1, r);
}

void update(int pos, int val, int index,int l,int  r){
	if(l == r) {
		tree[index] = val;
		return;
	}
	int m = (l + r) / 2;
	if(pos <= m) update(pos, val, index * 2, l, m);
	else update(pos, val, index * 2 + 1, m + 1, r);
	tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	build(1, 0, n - 1);
	for(int i = 0; i < q; i++){
		int op, a, b;
		cin >> op >> a >> b;
		if(op == 1){
			update(a - 1, b, 1, 0, n - 1);
		}
		if(op == 2){
			cout << query(a - 1, b - 1, 1, 0, n - 1) << '\n';
		}
	}
}
