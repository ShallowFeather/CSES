#include <bits/stdc++.h>

using namespace std;

string s, ans;
set<string> out;
map<char, int> save;
void dfs(string a, string b){
    if(b.size() == 0){
        out.insert(a);
        return;
    }
    else {
        for(int i = 0; i < b.size(); i++){
            dfs(a + b[i], b.substr(0, i) + b.substr(i + 1));
        }
    }
}

int main(){
    cin >> s;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) save[s[i]]++;
    dfs("", s);
    cout << out.size() << '\n';
    for(auto i : out){
        cout << i << '\n';
    }
}
