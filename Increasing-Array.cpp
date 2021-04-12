#include <bits/stdc++.h>

using namespace std;
long long arr[200005];
int main(){
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != 0){
            if(arr[i - 1] > arr[i]) {ans += arr[i - 1] - arr[i]; arr[i] = arr[i - 1];}
        }
    }
    cout << ans << '\n';
}
