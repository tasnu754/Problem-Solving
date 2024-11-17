#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int k;
        cin>>k;

        unordered_set<int> st(k);

        for(int i=0; i<k; i++){
            int x;
            cin>>x;

            st.insert(x);
        
        }

        k -= 2;
        bool find = false;
        int n, m;

        for( n=1; n <= k/2; n++){
        
            if(k % n == 0){
                m = k / n;

                if(st.count(n) && st.count(m)){
                    // cout<<n<<" "<<m<<endl;
                    find = true;
                    break;
                }
            }
        
        }

        if(find)
            cout<<n<<" "<<m<<endl;
        else
            cout<<1<<" "<<k<<endl;




    
    }


    return 0;
}