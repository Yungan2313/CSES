#include <bits/stdc++.h>

using namespace std;


int main(){
    string str,ans = "";
    vector<int> alph;
    int count = 0;
    for(int i = 0;i<26;i++){
        // char temp = ('A'+i);
        // string str(1,temp);
        alph.push_back(0);
    }
    getline(cin,str);
    for(int i = 0;i<str.length();i++){
        alph[str[i]-'A']++;
        if(alph[str[i]-'A'] == 2){
            ans += str[i];
            alph[str[i] - 'A'] = 0;
        }
    }
    string temp = ans;
    reverse(temp.begin(),temp.end());
    for(int i = 0;i<26;i++){
        if(alph[i] != 0){
            count++;
            string temp(1,'A'+i);
            ans += temp;
        }
    }
    if(count > 1){
        cout << "NO SOLUTION\n";
    }
    else{
        ans += temp;
        cout << ans << '\n';
    }
}