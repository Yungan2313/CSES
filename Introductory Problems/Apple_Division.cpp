#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    ll int n;
    ll int count = 0;
    vector<ll int> list;
    ll int ans;
    cin >> n;
    for(ll int i = 0;i<n;i++){
        ll int temp;
        cin >> temp;
        list.push_back(temp);
        count += temp;
    }
    for(ll int i = 0;i<(1<<n);i++){
        ll int sum = 0;
        for(int j = 0;j<n;j++){
            if(i & (1<<j)){
                sum += list[j];
            }
        }
        ll int cur = abs(count - sum - sum);
        ans = min(ans,cur);
    }
    cout << ans << '\n';
}