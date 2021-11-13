#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string a,b;
        int n;
        cin >> n >> a;
        b = a;
        if(is_sorted(a.begin(),a.end())){
            cout << 0 << '\n';
        }else{
            cout << 1 << '\n';
            sort(b.begin(),b.end());
            vector <int> ans;
            for(int i = 0;i<n;i++){
                if(a[i] != b[i]){
                    ans.push_back(i+1);
                }
            }
            cout << ans.size() << ' ';
            for(int i = 0;i<ans.size();i++){
                cout << ans[i] << " \n"[i+1 == ans.size()];
            }
        }
    }
    return 0;
}