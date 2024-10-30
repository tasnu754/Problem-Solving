#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        vector<long long> newV;
        vector<int> sz;

        int n;
        cin>>n;

        for(int i=0; i<n; i++){
            long long x;
            cin>>x;

            auto it = lower_bound(newV.begin(), newV.end(), x);



                while(it != newV.end() && *it==x){

                    x = 2*x;
                    
                    newV.erase(it);

                    it = lower_bound(newV.begin(), newV.end(), x);
                }
                newV.insert(lower_bound(newV.begin(), newV.end(), x), x);
                sz.push_back(newV.size());
            }
        

        for(int val : sz){
            cout<<val<<" ";
        }

        cout<<endl;
    }



    return 0;
}