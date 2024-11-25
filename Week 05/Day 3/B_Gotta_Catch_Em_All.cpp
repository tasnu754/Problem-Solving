#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, nrml, mstr;
        cin>>n>>nrml>>mstr;

        int a = 0;

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            if((x*nrml) <= mstr)
                a += (x*nrml);
            else
                a += mstr;
        
        }

        cout<<a<<endl;
    
    }


    return 0;
}