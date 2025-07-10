#include <bits/stdc++.h>
using namespace std;
#define ll long long


//t.c n (function)
//s.c n(stack space)

void f(int i,int sum){
    if(i == 0){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}

void solve(){
    f(5,0);


}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
