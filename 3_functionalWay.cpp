#include <bits/stdc++.h>
using namespace std;
#define ll long long


//t.c n (function)
//s.c n(stack space)

int f(int i){
    if(i == 0){
        return 0;
    }
    return i+f(i-1); 
}

void solve(){
    cout<<f(5)<<endl;


}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
