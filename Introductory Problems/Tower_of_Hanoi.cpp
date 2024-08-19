#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

void hanoi(int n,int src,int dest,int aux,vector<pair<int,int>> &move, int &count){
    if(n == 0){
        return;
    }
    hanoi(n-1,src,aux,dest,move,count);
    // cout << src << " " << dest << endl;
    move.push_back(pair<int,int>(src,dest));
    count++;
    hanoi(n-1,aux,dest,src,move,count);
}


int main(){
    int n;
    vector<pair<int,int>> move;
    int count = 0;
    cin >> n;
    hanoi(n,1,3,2,move,count);
    cout << count << endl;
    for(pair<int,int> out:move){
        cout << out.first << " " << out.second << endl;
    }
}