#include <bits/stdc++.h>
using namespace std;


void f(int i,int arr[]){
    if(i >= 6/2){
        return;
    }
    swap(arr[i],arr[6-i-1]);
    f(i+1,arr);
}

void solve(){
    int a[] = {1,2,3,4,5,6};
    f(0,a);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }


}
int main() {

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
