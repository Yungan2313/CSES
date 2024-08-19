#include <bits/stdc++.h>

using namespace std;
void dfs(vector<string> &build,int i,int j,vector<vector<int>> &vis){
    build[i][j] = '*';
    if(i>0){
        if(build[i-1][j] == '.' && vis[i-1][j]==1){
            dfs(build,i-1,j,vis);
            vis[i-1][j] = 0;
        }
    }
    if(i < build.size()-1){
        if(build[i+1][j] == '.' && vis[i+1][j]==1){
            dfs(build,i+1,j,vis);
            vis[i+1][j] = 0;
        }
    }
    if(j>0){
        if(build[i][j-1] == '.' && vis[i][j-1]==1){
            dfs(build,i,j-1,vis);
            vis[i][j-1] = 0;
        }
    }
    if(j < build[i].length()-1){
        if(build[i][j+1] == '.' && vis[i][j+1]==1){
            dfs(build,i,j+1,vis);
            vis[i][j+1] = 0;
        }
    }
}

int main(){
    int n,m;
    int count = 0;
    vector<string> building;
    vector<vector<int>> vis;
    cin >> n >> m;
    cin.ignore();
    for(int i = 0;i<n;i++){
        string temp;
        vector<int> itemp;
        getline(cin,temp);
        building.push_back(temp);
        for(int j = 0;j<m;j++){
            if(temp[j] == '#'){
                itemp.push_back(0);
            }
            else{
                itemp.push_back(1);
            }
        }
        vis.push_back(itemp);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(building[i][j] == '.'){
                dfs(building,i,j,vis);
                count++;
            }
        }
    }
    cout << count << '\n';
}