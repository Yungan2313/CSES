#include <bits/stdc++.h>

using namespace std;
#define lli long long int
int main(){
    int q;
    cin >> q;
    while(q--){
        int n,k;
        int p = 0;
        cin >> n >> k;
        for(int i = 2;i<=n;i++){
            p = (p+k)%i;
        }
        cout << p+1 << '\n';
    }



}