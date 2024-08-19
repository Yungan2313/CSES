#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
void swap(char &a,char &b){
    char temp;
    temp = a;
    a = b;
    b = temp;
}
void perm(set<string> &ans,string &str,int i,int n){
    if(i >= n){
        ans.insert(str);
    }
    else{
        for(int j = i;j<=n;j++){
            swap(str[i],str[j]);
            perm(ans,str,i+1,n);
            swap(str[i],str[j]);
        }
    }
}


int main(){
    string str;
    getline(cin,str);
    set<string> ans;
    sort(str.begin(),str.end());
    perm(ans,str,0,str.length()-1);
    cout << ans.size() << endl;
    for(string s : ans){
        cout << s << endl;
    }




}
