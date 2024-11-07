#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, same = 1;
        cin>>n;

        string x, y;
        cin>>x>>y;

        for(int i=0; i<n; i++){
            if((x[i] != y[i]) && !(x[i]=='G' && y[i]=='B') && !(x[i]=='B' && y[i]=='G')){
                same = 0;
                break;
            }

        }

        if(same==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}