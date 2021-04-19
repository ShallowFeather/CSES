#include <bits/stdc++.h>

using namespace std;
long long h, t[200005];
multiset<long long, greater<long long>> se;
int main(){
    long long n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
		long long a;
		cin >> a;
		se.insert(a);
	}
	
    for(int i = 0; i < m; i++){
        cin >> h;
		auto it = se.lower_bound(h);
		if(it == se.end()){ cout << -1 << '\n'; continue;}
		else {
			cout << *it << '\n';
			se.erase(it);
		}
	}
}
