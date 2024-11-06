#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int st, vt, cfw = 0, cfnw = 0;
        cin>>st>>vt;

        vector<int> cf(st), cfina(st), s;

        for(int i=0; i<st; i++){
            cin>>cf[i];
        }
        for(int i=0; i<st; i++){
            cin>>cfina[i];
        }

        for(int i=0; i<st; i++){
            if(cf[i] > cfina[i])
                cfw++;
            else{
                cfnw++;
                s.push_back(cfina[i]-cf[i]+1);
            }
                
        }


        if(cfw > st/2)
            cout<<"YES"<<endl;
        else{
            sort(s.begin(), s.end());

            for(int i=0; i<s.size(); i++){
                if(vt >= s[i]){
                    cfw++;
                    vt -= s[i];

                    if(cfw > st/2)
                        break;
                }
                else    
                    break;
            }

            if(cfw > st/2)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }

        


    }


    return 0;
}