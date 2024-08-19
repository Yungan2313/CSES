#include <iostream>

#define ll long long
using namespace std;
int main(){
    string s;
    ll int count = 0;
    ll int max = 0;
    char c;
    getline(cin,s);
    c = s[0];
    for(ll int i = 0;i<s.length();i++){
        if(c == s[i]){
            count++;
        }
        else{
            count = 1;
            c = s[i];
        }
        if(max < count){
            max = count;
        }
    }
    cout << max << endl;


}