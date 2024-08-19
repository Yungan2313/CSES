#include <iostream>

using namespace std;
#define ll long long
// int take5(int n){
//     int count = 0;
//     while(n){
//         if(n%5 == 0){
//             count++;
//             n /= 5;
//         }
//         else{
//             break;
//         }
//     }
//     return count;
// }
// int take2(int n){
//     int count = 0;
//     while(n){
//         if(n%2 == 0){
//             count++;
//             n /= 2;
//         }
//         else{
//             break;
//         }
//     }
//     return count;
// }


int main(){
    int n;
    int count_5 = 0;
    cin >> n;
    while(n){
        // cout << n << ":" << endl;
        count_5 += n/5;
        // count_2 += take2(n);
        // cout << "5: " << count_5 << endl;
        // cout << "2: " << count_2 << endl;
        // cout << "------------------" << endl;
        n /= 5;
    }
    cout << count_5 << endl;

}