#include <iostream>
#include <vector>

#define ll long long
using namespace std;
int main(){
    ll int n;
    vector<ll int> list;
    cin >> n;
    if(n == 1){
        cout << "1" << endl;
    }
    else if(n <= 3){
        cout << "NO SOLUTION" << endl;
    }
    else if(n == 4){
        cout << "2 4 1 3" << endl;
    }
    else{
        for(ll int i = n;i>0;i--){
            list.push_back(i);
        }
        for(ll int i = 0;i<n;i+=2){
            cout << list[i] << " ";
        }
        for(ll int i = 1;i<n;i+=2){
            cout << list[i] << " ";
        }
        endl(cout);
    }
}