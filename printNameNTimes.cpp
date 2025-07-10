#include <bits/stdc++.h>
using namespace std;
#define ll long long


//t.c n (function)
//s.c n(stack space)

void f(int i,int n){
    if(i > n){
        return;
    }
    cout<<"manaswi"<<endl;
    f(i+1,n);
}

void solve(){
    f(1,3);


}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
