#include <iostream>

using namespace std;
#define ll long long
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cin >> n; 
    for(int i = 0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if(b>a){
            swap(a,b);
        }
        if(a <= b*2 && (a+b)%3 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }



    
}