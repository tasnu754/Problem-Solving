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

        vector<int> a(n);
        vector<int> b(n);

        int MaxIdx1 = -1, MaxIdx2 = -1;
        int maxval1 = INT_MIN , maxval2 = INT_MIN;

        for(int i=0; i<n; i++){
        
            cin>>a[i];

            if(a[i] > maxval1){
                maxval1 = a[i];
                MaxIdx1 = i;
            }
                
        
        }

        for(int i=0; i<n; i++){
            if((maxval2 < a[i]) && (a[i] < maxval1)){
                maxval2 = a[i];
                MaxIdx2 = i;
            }
            
        
        }

    
        for(int i=0; i<n; i++){
        
            cin>>b[i];
        
        }

        int alice = max(a[MaxIdx1], b[MaxIdx1]);
        int bob = max(a[MaxIdx2], b[MaxIdx2]);

        

        if(alice > bob){
            cout<<"Yes"<<endl;
        }
        else{
            
             int al = max(a[MaxIdx2], b[MaxIdx2]);           
             int bb = max(a[MaxIdx1], b[MaxIdx1]);


             if(al > bb)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }


    
    }


    return 0;
}