#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 5;

long long tree[4 * MAX];
long long arr[MAX];


void build(long long index, long long l, long long r){
	if(l == r){
		tree[index] = arr[l];
		return;
	}
	long long m = (l + r) / 2;
	build(index * 2, l, m);
	build(index * 2 + 1, m + 1, r);
	tree[index] = tree[index * 2] + tree[index * 2 + 1];
	return;
}

long long query(long long ql, long long qr, long long index, long long l, long long r) {
	if(ql <= l && r <= qr) return tree[index];
	long long m = (l + r) / 2;
	if(ql > m) return query(ql, qr, index * 2 + 1, m + 1, r);
	if(qr <= m) return query(ql, qr, index * 2, l, m);
	return query(ql, qr, index * 2, l, m) + query(ql, qr, index * 2 + 1, m + 1, r);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    long long n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    build(1, 0, n - 1);
	for(int i = 0; i < q; i++){
		long long a, b;
		cin >> a >> b;
		cout << query(a, b-1, 1, 0, n - 1 ) << '\n';
	}
}
