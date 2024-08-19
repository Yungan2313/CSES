#include <iostream>

using namespace std;
#define ll long long
#define MOD 1000000007
int main(){
    ll int n,sum = 1;
    cin >> n;
    if(n == 0){
        cout << "0" << endl;
    }
    for(int i = 0;i<n;i++){
        sum *= 2;
        sum %= MOD;
    }
    cout << sum << endl;
}