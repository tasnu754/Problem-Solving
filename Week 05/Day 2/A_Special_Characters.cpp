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

        if(n%2)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++){
            
                cout<<"AAAB";
            
            }
            cout<<endl;
        }
    
    }


    return 0;
}