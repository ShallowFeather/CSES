#include <bits/stdc++.h>

using namespace std;
const int ma = 1e5 + 5;
long long arr[ma];
long long solve(long long c, long long total, long long i){
	if(i == 0) return abs(total - c - c);
	return min(solve(c + arr[i], total, i-1), solve(c, total, i-1));
}

int main(){
	int n;
	cin >> n;
	long long total = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		total += arr[i];
	}
	cout <<	solve(0, total, n - 1) << '\n';
}
