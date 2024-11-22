#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin>>n>>s;

    vector<long long> v(n);

    for(int i=0; i<n; i++){
    
        cin>>v[i];
    
    }

    int l = 0, r = 0, ans = INT_MAX;
    long long sum = 0;

    while(r < n){
        sum += v[r];

        if(sum >= s){
            ans = min(ans, (r-l+1));

            sum -= v[l];
            l++;

            while(l <= r && sum >= s){
                ans = min(ans, (r-l+1));

                sum -= v[l];
                l++;
            }
        }
        r++;
    }

    cout<<((ans == INT_MAX) ? -1 : ans)<<endl;
    return 0;
}