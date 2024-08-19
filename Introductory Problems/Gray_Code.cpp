#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> getgraycode(int n){
    vector<string> final;
    if(n == 1){
        return {"0","1"};
    }

    vector<string> prevcode = getgraycode(n-1);
    vector<string> reverse_code = prevcode;
    reverse(reverse_code.begin(),reverse_code.end());
    int size = prevcode.size();
    for(int i = 0;i<size;i++){
        string temp = "0" + prevcode[i];
        final.push_back(temp);
    }
    for(int i = 0;i<size;i++){
        string temp = "1" + reverse_code[i];
        final.push_back(temp);
    }
    return final;
}
int main(){
    int n;
    cin >> n;
    vector<string> graycode = getgraycode(n);
    for(auto i:graycode){
        cout << i << endl;
    }
}