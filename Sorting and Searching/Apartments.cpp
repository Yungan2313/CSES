#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll int n,m,k;
    vector<ll int> appl,apart;
    cin >> n >> m >> k;
    ll int aptr = n,bptr = m;
    ll int count = 0;
    while(n--){
        ll int temp;
        cin >> temp;
        appl.push_back(temp);
    }
    sort(appl.begin(),appl.end());
    while(m--){
        ll int temp;
        cin >> temp;
        apart.push_back(temp);
    }
    sort(apart.begin(),apart.end());
    ll int a = 0,b = 0;
    while((a < aptr) && (b < bptr)){
        if(abs(appl[a] - apart [b]) <= k){
            a++;
            b++;
            count++;
        }
        else if(appl[a] < apart[b]){
            a++;
        }
        else{
            b++;
        }
    }
    cout << count <<'\n';

}