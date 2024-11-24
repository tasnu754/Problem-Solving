#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n;
        string a, b, c;

        cin>>n>>a>>b>>c;
        bool flag = 0;

        for(int i=0; i<n; i++){
        
            if(a[i]!=c[i] && b[i]!=c[i]){
                flag = 1;
            }
        
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    
    }


    return 0;
}