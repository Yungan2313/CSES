#include <iostream>

using namespace std;
int main(){
    unsigned long long n,m,a;
    cin >> n >> m >> a;
    n%a != 0 ? n = n/a+1:n = n/a; 
    m%a != 0 ? m = m/a+1:m = m/a;
    cout << n*m;
}