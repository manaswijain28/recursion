#include <bits/stdc++.h>
using namespace std;
//t.c: 2^n * n
//s.c: n

void f(int i,vector<int> &v,vector<int> &temp){
    if(i == v.size()){
        for(auto it:temp){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    temp.push_back(v[i]);
    f(i+1,v,temp);
    temp.pop_back();
    f(i+1,v,temp);
}

void solve(){
    vector<int> v = {1,2,3};
    vector<int> temp;
    f(0,v,temp);



}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
