#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, act = 0;
    cin>>x;


        if(x >= 1){
            act++;
            x -= 1;
        }
 
        if(x >= 2){
            act++;
            x -= 2;
        }
        if(x >= 4){
            act++;
            x -= 4;
        }
    

    cout<<act<<endl;


    return 0;
}