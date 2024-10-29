#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int p1=0, p2=0, p3=0;

        map<string,vector<int>> mp;

        for(int i=1; i<=3; i++){
            for(int j=0; j<n; j++){
                string s;
                cin>>s;

                mp[s].push_back(i);
            }
        }

        for(auto it: mp){
            if(it.second.size() == 2 ){
                for(int i=0; i<2; i++){
                    if(it.second[i] == 1){
                        p1 += 1;
                    }
                    else if(it.second[i] == 2){
                        p2 += 1;
                    }
                    else{
                        p3 += 1;
                    }
                }
            }
            else if(it.second.size() == 1){
                if(it.second[0] == 1){
                    p1 += 3;
                }
                else if(it.second[0] == 2){
                    p2 += 3;
                }
                else{
                    p3 += 3;
                }
            }
        }


        cout<<p1<<" "<<p2<<" "<<p3<<endl;

        
    }


    return 0;
}