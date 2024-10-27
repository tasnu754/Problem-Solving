#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, cnt = 0, k = 2;
    cin>>a>>b;

    while(k){
        if(a > b){
            cnt = cnt + a;
            a--;
        }
        else{
            cnt = cnt + b;
            b--;
        }
        
        k--;
    }

    cout<<cnt<<endl;

    return 0;
}