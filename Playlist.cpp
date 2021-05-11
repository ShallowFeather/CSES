#include <bits/stdc++.h>
const int MAX = 2e5 + 5;
using namespace std;
map<long long, long long> maps;
long long a[MAX];
int main(){
	long long n, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	for(long long l = 0, r = 0; r < n; r++) {
		if(!maps.count(a[r])) {
			maps[a[r]] = r;
			ans = max(ans, r - l + 1);
		}
		else {
			for(; l <= maps[a[r]]; l++)
				maps.erase(a[l]);
			maps[a[r]] = r;
		}
	}
	cout << ans << '\n';
}
