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
        int cnt0 = 0, cnt1 = 0;

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            cnt0 += (x==0);
            cnt1 += (x==1);

        
        }

        if( 2* cnt0 > n+1){
            if(cnt1!=0 && cnt0+cnt1==n)
                cout<<2<<endl;
            else    
                cout<<1<<endl;
        }
        else    
            cout<<0<<endl;
    
    }


    return 0;
}