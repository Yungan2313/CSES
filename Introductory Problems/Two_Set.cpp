#include <iostream>
#include <vector>

using namespace std;
#define ll long long
int main(){
    ll int n;
    cin >> n;
    ll int sum = n*(n+1)/2;
    if(sum%2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    ll int set_sum = sum/2;
    vector<ll int> st,st2;
    while(n){
        if(set_sum - n >= 0){
            st.push_back(n);
            set_sum -= n;
        }
        else{
            st2.push_back(n);
        }
        n--;
    }
    cout << st.size() <<endl;
    for(ll int i:st){
        cout << i << " ";
    }
    endl(cout);
    cout << st2.size() << endl;
    for(ll int i:st2){
        cout << i << " ";
    }
    endl(cout);
}