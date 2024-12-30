#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n;
        cin>>n;

        while(n > 0){
            if(n >= 4){
                n -= 4;
            }
            else if(n >= 3){
                n -= 3;
            }
        }

        if(n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    
    }


    return 0;
}