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

        int a[200001] = {0};

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            cout<<char('a' + a[x]);
            a[x]++;
        
        }

        cout<<endl;


    
    }


    return 0;
}