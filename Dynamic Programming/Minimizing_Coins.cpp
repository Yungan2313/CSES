#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll dp[1000001];
int main(){
    ll int n,x;
    cin >> n >> x;
    vector<ll int> coins(n);
    for(int i = 0;i<n;i++){
        cin >> coins[i];
    }
    for(int i = 1;i<1000001;i++){
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for(int i = 1;i<=x;i++){
        for(int j = 0;j<n;j++){
            if(i - coins[j] >= 0){
                dp[i] = min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[x] == INT_MAX) cout << "-1\n";
    else cout << dp[x] << "\n";
}