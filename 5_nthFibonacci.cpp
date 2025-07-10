#include <bits/stdc++.h>
using namespace std;
//t.c: 2^n
//s.c: n

int f(int i){
    if(i <= 1){
        return i;
    }
    
    return f(i-1)+f(i-2);
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
