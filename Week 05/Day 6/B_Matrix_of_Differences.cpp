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

        int a[n+1][n+1];

        int cnt = 1, small = 1, larg = n*n;

        for(int i=1; i<=n; i++){
        
            if(i%2){
                for(int j=1; j<=n; j++){
                
                    if(cnt%2){
                        a[i][j] = small;
                        small++;
                    }
                    else{
                        a[i][j] = larg;
                        larg--;
                    }
                    cnt++;
                
                }
            }
            else{
                for(int j=n; j>=1; j--){
                
                    if(cnt%2){
                        a[i][j] = small;
                        small++;
                    }
                    else{
                        a[i][j] = larg;
                        larg--;
                    }
                    cnt++;
                
                }
            }
        
        }

        for(int i=1; i<=n; i++){
        
            for(int j=1; j<=n; j++){
            
                cout<<a[i][j]<<" ";
            
            }
            cout<<endl;
        
        }
    
    }


    return 0;
}