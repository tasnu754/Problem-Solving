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

        int XOR = 0;

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            XOR ^= x;
        
        }

        if(n%2==1)
            cout<<XOR<<endl;
        else{
            if(XOR == 0)
                cout<<0<<endl;
            else
                cout<<-1<<endl;
        }
    
    }


    return 0;
}