#include <bits/stdc++.h>
using namespace std;
//t.c: 2^n 
//s.c: n

bool f(int i,vector<int> &v,vector<int> &temp,int sum, int k){
    if(i == v.size()){
        if(sum == k){
            for(auto it : temp){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }else{
            return false;
        }


    }

    temp.push_back(v[i]);
    if(f(i+1,v,temp,sum+v[i],k) == true){
        return true;
    }
    temp.pop_back();
    if(f(i+1,v,temp,sum,k) == true){
        return true;

    }

    return false;
}

void solve(){
    vector<int> v = {1,2,1};
    vector<int> temp;
    int sum = 0;
    int k = 2;
    f(0,v,temp,sum,k);



}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
