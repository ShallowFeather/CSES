#include<bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 5;
long long arr[MAX];
int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		long long a;
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << '\n';
	}
}
