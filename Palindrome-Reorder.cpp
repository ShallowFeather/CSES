#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int m = s.size();
    map<char, int> maps;
    char ans[5005];
    if(m % 2 == 1){
        //1 odd
        bool odd = false;
        for(int i = 0; i < m; i++){
            maps[s[i]]++;
        }
        for(int i = 0; i < m; i++){
            if(maps[s[i]] % 2 == 1 && odd == true) {
                cout << "NO SOLUTION" << '\n';
                return;
            }
            if(maps[s[i]] % 2 == 1 && odd == false) {odd = true; mid = s[i];}
        }
        string ans;
        for(auto i : maps){
            if(maps)
        }
        
    }
    else {
        for(int i = 0; i < m; i++)
            if(maps[s[i]] % 2 == 1) {
                cout << "NO SOLUTION" << '\n';
                return;
            }
        
        
    }
    

}
