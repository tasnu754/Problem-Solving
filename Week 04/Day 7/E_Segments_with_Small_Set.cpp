#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    vector<int> v(n);

    for(int i=0; i<n; i++){
    
        cin>>v[i];
    
    }

    map<int, int> cnt;

    int l = 0, r = 0;
    long long ans = 0;

    while(r < n){
        cnt[v[r]]++;

        if(cnt.size() <= k){
            ans += (r-l+1);
            r++;
        }
        else{
            while(cnt.size() > k && l <= r){
                cnt[v[l]]--;

                if(cnt[v[l]] == 0){
                    cnt.erase(v[l]);
                }
                l++;
            }

            ans += (r-l+1);
            r++;

        }
    }

    cout<<ans<<endl;


    return 0;
}