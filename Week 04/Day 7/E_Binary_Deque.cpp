#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, s;
        cin>>n>>s;

        vector<int> v(n);


        for(int i=0; i<n; i++){
        
            cin>>v[i];

        
        }

        int l = 0, r = 0, sum = 0, ans = -1;

        while(r < n){
            sum += v[r];

            if(sum == s){
                ans = max(ans, r-l+1);
            }
            else{

                while(sum > s && l<=r){
                    sum -= v[l];
                    l++;
                }
                if(s == sum){
                    ans = max(ans, r-l+1);
                }
            }
            r++;

        }

        cout<<(ans != -1 ? (n-ans) : -1)<<endl;


    
    }


    return 0;
}