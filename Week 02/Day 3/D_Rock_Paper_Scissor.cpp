#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, x1 = 0, y1 = 0;
        cin>>n;

        string x, y;
        cin>>x>>y;

        for(int i=0; i<n; i++){
            if(x[i] == y[i]){
                x1++, y1++;
            }
            else if(x[i] == 'R' && y[i] == 'S')
                x1++;
            else if(x[i] == 'S' && y[i] == 'R')
                y1++;
            else if(x[i] == 'S' && y[i] == 'P')
                x1++; 
            else if(x[i] == 'P' && y[i] == 'S')
                y1++;
            else if(x[i] == 'P' && y[i] == 'R')
                x1++;
            else if(x[i] == 'R' && y[i] == 'P')
                y1++;
            
        }


        if(x1 > y1 || (x1==0 && y1==0))
            cout<<0<<endl;
        else{
            int a = (y1-x1) / 2 + 1;

            cout<<a<<endl;
        }

        
    }


    return 0;
}