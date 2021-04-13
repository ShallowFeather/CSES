#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long total = (n + 1) * n / 2;
    if(total % 2 == 1){
        cout << "NO" << '\n';
        return 0;
    }
    total /= 2;
    vector<long long> s1, s2;
    while(n){
        if(total - n >= 0){
            s1.push_back(n);
            total -= n;
        }
        else {
            s2.push_back(n);
        }
        n--;
    }
    cout << "YES" << '\n';
    cout << s1.size() << '\n';
    for(int i = 0; i < s1.size(); i++)
        cout << s1[i] << " ";
    cout << '\n' << s2.size() << '\n';
    for(int i = 0; i < s2.size(); i++)
        cout << s2[i] << " ";
    cout << '\n';
}
