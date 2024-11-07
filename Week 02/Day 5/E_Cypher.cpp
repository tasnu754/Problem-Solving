#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int whl;
        cin>>whl;

        vector<int> v(whl);
        for(int i=0; i<whl; i++){
            cin>>v[i];
        }

        
        for(int i=0; i<whl; i++){
            int mv;
            string s;

            cin>>mv>>s;


            for(int j=0; j<mv; j++){
                if(s[j] == 'U'){
                    if(v[i] == 0){
                        v[i] = 9;
                    }
                    else{
                        v[i]--;
                    }
                }
                else{
                    if(v[i] == 9){
                        v[i] = 0;
                    }
                    else{
                        v[i]++;
                    }
                }
                
            }

        }

        for(int x: v)
            cout<<x<<" ";

        cout<<endl;



    }


    return 0;
}