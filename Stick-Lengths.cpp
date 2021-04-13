#include <bits/stdc++.h>

using namespace std;
long long arr[10000000];
int main(){
    long long n;
    cin >> n;
    long long mid = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    mid = arr[n / 2];
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(mid - arr[i]);
    }
    cout << ans << '\n';
}
