#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, cf;
        cin>>n>>cf;
        long long ans = 0;
        int i = n, c = cf;

        while(c){
            ans += pow(2,i);
            i--, c--;
        }

        for(int i=1; i<=n-cf; i++){
            ans -= pow(2,i);
        }

        cout<<ans<<endl;
    }


    return 0;
}