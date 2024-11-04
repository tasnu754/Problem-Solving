#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int d, t = 0, x = 0;
        cin>>d;

        if(d>=2){
            x = 2;

            while(x <= d){
                t++;
                x += 7;
            }
        }

        cout<<t<<endl;
        

    }


    return 0;
}