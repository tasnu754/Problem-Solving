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
        vector<int> v1;
        vector<int> v2;
        map<int, int> mp;

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
            
                if(i==1){
                    int x;
                    cin>>x;
                    v1.push_back(x);
                    if(j==n-2){
                        mp[x]++;
                    }
                }
                else if(i==2){
                    int x;
                    cin>>x;
                    v2.push_back(x);
                    if(j==n-2){
                        mp[x]++;
                    }
                }
                else{
                    int x;
                    cin>>x;
                    if(j==n-2){
                        mp[x]++;
                    }
                }
                
            
            }
        }

        int less, many;
        for(auto it=mp.begin() ; it!=mp.end(); it++){
            if(it->second==1){
                less = it->first;
            }
            else{
                many = it->first;
            }
        }

        // if(v1[n-1]==less){
        //     for(auto x : v1){
        //         cout<<x<<" ";
        //     }
        //     cout<<many<<endl;
        // }
        // else if(v2[n-1]==less){
        //     for(auto x : v2){
        //         cout<<x<<" ";
        //     }
        //     cout<<many<<endl;
        // }

        for(auto x : v1){
            cout<<x<<" ";
        }
        cout<<endl;

    
    }


    return 0;
}