#include <iostream>

using namespace std;
long long int algor(long long int i){
    if(i%2==0){
        i /= 2;
        return i;
    }
    else{
        return i*3+1;
    }
}
int main(){
    long long int n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        n = algor(n);
    }
    cout << 1 << endl;
}