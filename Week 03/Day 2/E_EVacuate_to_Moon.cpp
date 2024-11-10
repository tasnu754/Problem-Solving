#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        long long cars, outl, hr;
        cin>>cars>>outl>>hr;

        vector<long long> cr(cars), otl(outl);

        for(int i=0; i<cars; i++){
            cin>>cr[i];
        }
        for(int i=0; i<outl; i++){
            cin>>otl[i];
        }

        sort(cr.rbegin(), cr.rend());
        sort(otl.rbegin(), otl.rend());

        long long ans = 0;

        for(int i=0; i<min(cars,outl); i++){
            ans += min(cr[i], otl[i]*hr);
        }

        cout<<ans<<endl;

    }


    return 0;
}