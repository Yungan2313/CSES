#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int main(){
    lli n;
    set<lli> list;
    cin >> n;
    while(n--){
        lli temp;
        cin >> temp;
        list.insert(temp);
    }
    cout << list.size();
}