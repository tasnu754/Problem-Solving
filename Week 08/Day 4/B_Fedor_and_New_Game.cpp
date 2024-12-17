#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin>>n>>m>>k;

    vector<int> v(m+1);

    for(int i=0; i<m+1; i++){
    
        cin>>v[i];
    
    }

    int fed = v[m];
    int frnds = 0;

    for(int i=0; i<m; i++){
    
        int XOR = fed ^ v[i];
        int diff = 0;

        while(XOR){
            diff += (XOR & 1);
            XOR = (XOR>>1);
        }

        if(diff <= k)
            frnds++;
    
    }

    cout<<frnds<<endl;



    return 0;
}