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

        vector<int> v(n);

        for(int i=0; i<n; i++){
        
            cin>>v[i];
        
        }

        queue<int> ind;
        for(int i=0; i<n-1; i++){
        
            ind.push(i);
        
        }

        
        int sec = 0;

        while(!ind.empty()){
            int size = ind.size();
            bool change = false;

            for(int i=0; i<size; i++){

                int idx = ind.front();
                ind.pop();
            
                if(v[idx] < v[idx+1]){
                    v[idx] = v[idx+1];
                    change = true;

                    if(idx-1 >= 0)
                        ind.push(idx-1);
                }
            
            }

            if(change){
                sec++;
            }
        }

        cout<<sec<<endl;
    
    }


    return 0;
}