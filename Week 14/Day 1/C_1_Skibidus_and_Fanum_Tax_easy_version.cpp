#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, m, b;
        cin>>n>>m;

        vector<int> a(n);

        for(int i=0; i<n; i++){
        
            cin>>a[i];
        
        }

        cin>>b;

        for(int i=0; i<n-1; i++){
        
            if(a[i] > a[i+1]){
                a[i] = b - a[i];
            }
        
        }

        bool isSort = true;
        for(int i=0; i<n-1; i++){
        
            if(a[i] > a[i+1]){
                isSort = false;
            }
        
        }

        if(isSort)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    
    }


    return 0;
}