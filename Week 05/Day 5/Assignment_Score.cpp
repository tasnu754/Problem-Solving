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

        int pass = 0.5 * (100* (n+1));
        int get = 0;

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            get += x;
        
        }

        int remain = pass - get;

        if(remain> 100){
            cout<<-1<<endl;
        }
        else if(remain <=0 ){
            cout<<0<<endl;
        }
        else
            cout<<remain<<endl;

        
    
    }


    return 0;
}