#include <iostream>
#include <stack>
#include <string>

using namespace std;
int position(string s,int start,int mode){//0 = number 1 = alphabat
    if(mode){
        for(int j = start;j<s.length();j++){
            if(s[j] >= '0' && s[j] <= '9'){
                return j;
            }
        }
    }
    else{
        for(int j = start;j<s.length();j++){
            if(!(s[j] >= '0' && s[j] <= '9')){
                return j;
            }
        }
    }
    return s.length();
}
int check(string s){
    if(s.find('C') == string::npos){
        return 0;
    }
    if(!(s[1] >= '0' && s[1] <= '9')){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0;i<n;i++){
        string line;
        getline(cin,line);
        if(line[0] == 'R' && check(line)){//R23C55
            int p1 = position(line,1,0);//1~p1-1 = digit | p1 = c | p1+1~ = alph
            string row = line.substr(1,p1-1);
            string column = line.substr(p1+1);
            int drow = stoi(row);
            int dcolumn = stoi(column);
            string last;
            while(dcolumn){
                char alph;
                if(dcolumn%26 == 0){
                    alph = 'Z';
                }
                else{
                    alph = dcolumn%26 + 'A' -1;
                }
                last = alph + last;
                dcolumn /= 26;
            }
            cout << last << row << endl;
        }
        else{//BC23
            stack<char> list;
            int c = position(line,0,1);//0~c-1 = alph
            for(int j = 0;j<c;j++){
                list.push(line[j]);
            }
            int count = 1;
            int sum = 0;
            for(int j = 0;j<c;j++){
                int num = list.top() - 'A' +1;
                sum += num*count;
                list.pop();
                count *= 26;
            }
            string row = line.substr(c);
            cout << "R" << row << "C" << sum << endl;
        }
    }
}