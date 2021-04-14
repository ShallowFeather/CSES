#include <bits/stdc++.h>

using namespace std;
long long kid[2000005];
int main() {
    long long n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {cin >> kid[i];}
    sort(kid, kid + n);
    int ans = n;
    int i = 0, j = n - 1;
    while(i < j){
        if(kid[i] + kid[j] <= x) {
            ans--;
            i++;
            j--;
        }
        else j--;
    }
    cout << ans;
}
