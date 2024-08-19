#include <bits/stdc++.h>

using namespace std;
#define MOD 1e9+7
#define lli long long int
lli fastpow(lli a,lli b){
    int mod = MOD;
    lli ans = 1;
    while(b>0){
        if(b&1) ans = (ans*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return ans;
}
int main(){
    int n;
    int mod = MOD;
    cin >> n;
    while(n--){
        lli a,b;
        cin >> a >> b;
        cout << fastpow(a,b) << '\n';


    }
}