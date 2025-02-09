#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int l, r;
        cin>>l>>r;
        
        bool noDiv = true;
        for(int i=l; i<=r; i++){
        
            for(int j=2; j*j<=i; j++){
            
                if(i%j == 0){
                    noDiv = false;
                    cout<<j<<" "<<i-j<<endl;
                    break;
                }

            }
            
            if(!noDiv)
            break;
            
        
        }

        if(noDiv)
            cout<<-1<<endl;
    
    }


    return 0;
}