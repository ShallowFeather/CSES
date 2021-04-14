#include <bits/stdc++.h>

using namespace std;

int tree[800000];
int arr[200000];
void build(int index, int l, int r) {
    if(l == r){ tree[index] = arr[l]; return;}
    int m = (l + r) / 2;
    build(index*2, l, m);
    build(index * 2 + 1, m + 1, r);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

int query(int ql, int qr, int index, int l, int r){
    if(ql <= l && r <= qr) return tree[index];
    int m = (l + r) / 2;
    if(ql > m) {
        return query(ql, qr, index * 2 + 1, m + 1, r);
    }
    if(qr <= m) {
        return query(ql, qr, index * 2, l, m);
    }
    return query(ql, qr, index * 2, l, m) + query(ql, qr, index * 2 + 1, m + 1, r);
}

int main(){
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    build(1, 0, n - 1);
    for(int i = 0; i < q; i++){
        int a, b;
        cout << query(a, b - 1, 1, 0, n - 1) << '\n';
    }
}
