#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long bitbow(long long a, long long b){
	a %= mod;
	long long ans = 1;
	while(b > 0){
		if(b & 1) ans = ans * a % mod;
		a = a * a % mod;
		b >>= 1;
	}
	return ans;
}

void solve(){
	long long a, b;
	cin >> a >> b;
	cout << bitbow(a, b) << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
}
