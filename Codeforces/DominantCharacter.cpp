#include<iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string a;
        int n,ans = -1;
        cin >> n >> a;
        if(a.find("aa") != string::npos){
            ans = 2;
        }else if(a.find("aba") != string::npos || a.find("aca") != string::npos){
            ans = 3;
        }else if(a.find("abca") != string::npos || a.find("acba") != string::npos){
            ans = 4;
        }
        else if(a.find("abbacca") != string::npos || a.find("accabba") != string::npos){
            ans = 7;
        }
        cout << ans << '\n';
    }
    return 0;
}