#include <iostream>
#include <vector>

#define ll long long
#define _MAX 100000000
using namespace std;
int main(){
    int n;
    vector<ll int> list;
    cin >> n;
    for(int i = 0;i<n;i++){
        ll int x,y;
        cin >> y >> x;
        if(y>x){
            if(y%2){
                ll int temp = y*y - y + 1;
                cout << (temp -= (y-x)) << endl;
            }
            else{
                ll int temp = y*y;
                cout << ((temp -= x)+1) << endl;
            }
        }
        else{
            if(x%2){
                ll int temp = x*x;
                cout << ((temp -= y)+1) << endl;
            }
            else{
                ll int temp = x*x - x + 1;
                cout << (temp -= (x-y)) << endl;
            }
        }
    }

}