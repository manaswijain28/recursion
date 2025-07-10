#include <bits/stdc++.h>
using namespace std;
//t.c: 2^n 
//s.c: n

int f(int i,vector<int> &v,vector<int> &temp,int sum, int k){
    if(i == v.size()){
        if(sum == k){
            return 1;
        }else{
            return 0;
        }


    }

    int ct = 0;

    temp.push_back(v[i]);
    ct += f(i+1,v,temp,sum+v[i],k);
    temp.pop_back();
    ct += f(i+1,v,temp,sum,k);

    return ct;
}

void solve(){
    vector<int> v = {1,2,1};
    vector<int> temp;
    int sum = 0;
    int k = 2;
    cout<<f(0,v,temp,sum,k);



}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
