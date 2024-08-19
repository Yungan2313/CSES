#include <iostream>
#include <vector>

#define ll long long
using namespace std;
int main(){
    int n;
    ll  int count = 0;
    cin >> n;
    vector<ll int> array;
    for(int i = 0;i<n;i++){
        ll int temp;
        cin >> temp;
        array.push_back(temp);
    }
    for(int i = 0;i<n-1;i++){
        if(array[i] > array[i+1]){
            ll int temp = array[i] - array[i+1];
            count += temp;
            array[i+1] = array[i];
        }
    }
    cout << count << endl;

}