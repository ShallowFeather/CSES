#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	int dp[5005][5005];
	dp[0][0] = 0;
	for(int i = 0; i < s1.size(); i++)
		dp[0][i + 1] = i + 1;
	for(int i = 0; i < s2.size(); i++){
		dp[i + 1][0] = i + 1;
	}
	for(int i = 0; i <= s1.size(); i++)
		for(int j = 0; j <= s2.size(); j++){
			if(s1[i] == s2[j]){
				dp[i + 1][j + 1] = dp[i][j];
			}
			else {
				dp[i + 1][j + 1] = 1 + min({dp[i][j + 1], dp[i + 1][j], dp[i][j]});
			}
		}
	cout << dp[s1.size() + 1][s2.size() + 1];
}
