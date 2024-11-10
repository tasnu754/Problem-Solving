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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        int flg = 0;
        for(int i=0; i<n-1; i++){
            if(v[i]!=0 && v[i]!=v[i+1]){
                flg = 1;
                break;
            }
        }

        if(flg)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }


    return 0;
}