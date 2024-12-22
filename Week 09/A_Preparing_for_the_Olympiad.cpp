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

        vector<int> a(n), b(n);

        for(int i=0; i<n; i++){
        
            cin>>a[i];
        
        }

        for(int i=0; i<n; i++){
        
            cin>>b[i];
        
        }

        int maxDiff = 0;

        for(int i=0; i<n; i++){
        
            if(i < n-1){
                maxDiff += max(a[i]-b[i+1], 0);

            }
            else{
                maxDiff += a[i];

            }
        
        }

        cout<<maxDiff<<endl;
    
    }


    return 0;
}