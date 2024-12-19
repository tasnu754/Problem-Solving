#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin>>s1>>s2;

    int n = s1.size();
    int pos1 = 0, pos2 = 0, unrec = 0;

    for(int i=0; i<n; i++){
    
        if(s1[i] == '+')
            pos1++;
        
        if(s2[i] == '+')
            pos2++;
        
        if(s2[i] == '?')
            unrec++; 
    
    }

    int combi = (1<<unrec), select = 0;


    for(int i=0; i<combi; i++){
    
        if((__builtin_popcount(i) + pos2) == pos1)
            select++;
    
    }

    double ans = (double)select / combi;

    cout<<fixed<<setprecision(12)<<ans<<endl;


    return 0;
}