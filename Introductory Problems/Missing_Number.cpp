#include <iostream>
#include <map>

#define ll long long
using namespace std;
int main(){
    ll int n;
    cin >> n;
    map<ll int,int> list;
    for(ll int i = 1;i<=n;i++){
        list.insert(pair<ll int,int>(i,1));
    }
    for(ll int i = 1;i<n;i++){
        int a;
        cin >> a;
        list.erase(a);
    }
    map<ll int,int>::iterator it;
    it = list.begin();
    cout << it->first << endl;
}