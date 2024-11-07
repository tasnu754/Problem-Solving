#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, k, evCnt = 0, oddCnt = 0, ev = 0, odd = 0;
        cin>>n>>k;

        string s;
        cin>>s;

        if(n==1)
            cout<<"YES"<<endl;
        else{

            map<char, int> mp;

            for(int i=0; i<n; i++){
                mp[s[i]]++;
            }

            for(auto [x,y] : mp){
                if(y%2 == 0){
                    ev++;
                    evCnt += y;
                }
                else{
                    odd++;
                    oddCnt += y;
                }
            }

            if(oddCnt >= k){
                
            }


        }
    }


    return 0;
}