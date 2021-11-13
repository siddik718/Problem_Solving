#include<iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        cout << ((a+b+c)%3?1:0) << '\n';
    }
    return 0;
}