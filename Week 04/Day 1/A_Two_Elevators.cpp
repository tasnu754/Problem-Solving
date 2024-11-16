#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int a, b, c;
        cin>>a>>b>>c;

        int ele1 = a-1;
        int ele2 = 0;

        if(c <= b){
            ele2 = b-1;
        }
        else{
            ele2 = ((c-b) * 2) + (b-1);
        }

        if(ele1 < ele2)
            cout<<1<<endl;
        else if(ele1 > ele2)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    
    }


    return 0;
}