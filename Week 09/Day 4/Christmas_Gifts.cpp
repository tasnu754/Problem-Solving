#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int h, l, w;
        cin>>h>>l>>w;

        int boxArea = 2 * ((l*w) + (l*h) + (w*h));

        int cnt = 1000 / boxArea;

        cout<<cnt<<endl;
    
    }


    return 0;
}