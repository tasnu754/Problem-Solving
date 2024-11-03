#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int m;
        cin>>m;

        int arr[m];
        int flag = 1;

        for(int i=0; i<m; i++){
            cin>>arr[i];
        }

        
        for(int i=1; i<m; i++){
            if(abs(arr[i-1]-arr[i]) != 5 && abs(arr[i-1]-arr[i]) != 7){
                flag = 0;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


    return 0;
}