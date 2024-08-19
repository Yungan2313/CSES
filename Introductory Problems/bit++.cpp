#include <iostream>
#include <vector>
#include <map>

using namespace std;
#define ll long long
void pbit(map<int,int> bit){
    map<int,int>::reverse_iterator it;
    for(it = bit.rbegin();it!=bit.rend();it++){
        cout << it->second;
    }
    endl(cout);
}
int main(){
    int n;
    vector<int> list,count;
    map<int,int> bit;
    cin >> n;
    for(int i = 0;i<n;i++){
        list.push_back(1<<i);//從0開始
        bit.insert(pair<int,int>(i+1,0));//從1開始
        count.push_back(0);
    }
    for(int i = 0;i<(1<<n);i++){
        pbit(bit);
        for(int i = 0;i<n;i++){
            count[i]++;
            if(count[i] == list[i]){
                if(bit.at(i+1) == 0){
                    bit[i+1] = 1;
                }
                else{
                    bit[i+1] = 0;
                }
                count[i] = 0;
            }
        }
    }
    
}