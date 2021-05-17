#include <bits/stdc++.h>

using namespace std;
const int MAX = 2e5 + 5;
map<int, int> mp;
int a[MAX];
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		mp[a[i]] = i;
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		ans++;
		while(mp[i + 1] > mp[i]){
			i++;
		}
	}
	cout << ans;
}
