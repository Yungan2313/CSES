#include <bits/stdc++.h>

using namespace std;
#define MOD 1e9+7
int dp[1000001];

int main(){
    int n;
    int mod = MOD;
    cin >> n;
    dp[0] = 1;
    for(int i = 1;i<=n;i++){//1~n
        for(int j = 1;j<=6;j++){
            if(j>i) break;
            dp[i] = (dp[i] + dp[i-j]) % mod;
        }
    }
    cout << dp[n] << endl;


}