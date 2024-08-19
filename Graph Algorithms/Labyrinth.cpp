#include <bits/stdc++.h>

using namespace std;
string trace(vector<vector<int>> table,pair<int,int> end){
    int count = table[end.first][end.second];
    pair<int,int> now = end;
    string path = "";
    while(count){
        if(table[now.first+1][now.second] == count-1){
            now = pair<int,int>(now.first+1,now.second);
            path += "U";
        }
        else if(table[now.first-1][now.second] == count-1){
            now = pair<int,int>(now.first-1,now.second);
            path += "D";
        }
        else if(table[now.first][now.second+1] == count-1){
            now = pair<int,int>(now.first,now.second+1);
            path += "L";
        }
        else if(table[now.first][now.second-1] == count-1){
            now = pair<int,int>(now.first,now.second-1);
            path += "R";
        }
        count--;
    }
    reverse(path.begin(),path.end());
    return path;
}
string BFS(vector<string> &_map,pair<int,int> start,pair<int,int> end,int n,int m){
    vector<vector<int>> table;
    queue<pair<pair<int,int>,int>> way;
    string path = "";
    way.push(pair<pair<int,int>,int>(start,1));
    int check = 0;
    for(int i = 0;i<n+2;i++){
        // cout <<"ok";
        vector<int> vtemp;
        for(int j = 0;j<m+2;j++){
            if(_map[i][j] == '#'){
                vtemp.push_back(-2);
            }
            else{
                vtemp.push_back(-1);
            }
        }
        table.push_back(vtemp);
    }
    table[start.first][start.second] = 0;
    // for(int i = 0;i<table.size();i++){
    //     for(auto it : table[i]){
    //         cout << it;
    //     }
    //     cout << endl;
    // }
    while(!way.empty()){
        pair<int,int> now = way.front().first;
        int count = way.front().second;
        way.pop();
        if(now == end){
            check = 1;
            break;
        }
        if(_map[now.first+1][now.second] != '#' && table[now.first+1][now.second] < 0){
            pair<int,int> temp;
            temp = (pair<int,int>(now.first+1,now.second));
            if(temp == end){
                table[now.first+1][now.second] = count;
                check = 1;
                break;
            }
            way.push(pair<pair<int,int>,int>(temp,count+1));
            table[now.first+1][now.second] = count;
        }
        if(_map[now.first-1][now.second] != '#' && table[now.first-1][now.second] < 0){
            pair<int,int> temp;
            temp = (pair<int,int>(now.first-1,now.second));
            if(temp == end){
                table[now.first-1][now.second] = count;
                check = 1;
                break;
            }
            way.push(pair<pair<int,int>,int>(temp,count+1));
            table[now.first-1][now.second] = count;
        }
        if(_map[now.first][now.second+1] != '#' && table[now.first][now.second+1] < 0){
            pair<int,int> temp;
            temp = (pair<int,int>(now.first,now.second+1));
            if(temp == end){
                table[now.first][now.second+1] = count;
                check = 1;
                break;
            }
            way.push(pair<pair<int,int>,int>(temp,count+1));
            table[now.first][now.second+1] = count;
        }
        if(_map[now.first][now.second-1] != '#' && table[now.first][now.second-1] < 0){
            pair<int,int> temp;
            temp = (pair<int,int>(now.first,now.second-1));
            if(temp == end){
                table[now.first][now.second-1] = count;
                check = 1;
                break;
            }
            way.push(pair<pair<int,int>,int>(temp,count+1));
            table[now.first][now.second-1] = count;
        }
    }
    // for(int i = 0;i<table.size();i++){
    //     for(auto it : table[i]){
    //         if(it>=0){
    //             cout << " " << it;
    //         }   
    //         else{
    //             cout << it;
    //         }
    //     }
    //     cout << endl;
    // }
    if(check){
        cout << "YES\n";
        return trace(table,end);
    }
    else{
        cout << "NO\n";
        return ""; 
    }


}

int main(){
    int n,m;
    int start_check = 1,end_check = 1;
    pair<int,int> posA,posB;
    cin >> n >> m;
    cin.ignore();
    vector<string> _map(n+2,"");
    string wall = "",path;
    for(int i = 0;i<m+2;i++){
        wall += "#";
    }
    _map[0] = wall;
    _map[n+1] = wall;
    for(int i = 1;i<=n;i++){
        string temp;
        getline(cin,temp);
        if(start_check){
            int count = 0;
            for(auto it : temp){
                if(it == 'A'){
                    posA = pair<int,int>(i,count+1);
                    start_check = 0;
                }
                count++;
            }
        }
        if(end_check){
            int count = 0;
            for(auto it : temp){
                if(it == 'B'){
                    posB = pair<int,int>(i,count+1);
                    end_check = 0;
                }
                count++;
            }
        }
        _map[i] += "#";
        _map[i] += temp;
        _map[i] += "#";
    }
    // for(auto it : _map){
    //     cout << it << endl;
    // }
    path = BFS(_map,posA,posB,n,m);
    // cout << posA.first << " " << posA.second;
    if(path.size() != 0){
        cout << path.size() << "\n" << path << "\n";
    }

}