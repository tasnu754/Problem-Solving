#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, thro;
        cin>>n>>thro;

        int ev = n/2;
        int odd = (n+1) / 2;

        if(thro%2 == 0){
            ev--;
            cout<<ev<<endl;
        }
        else{
            odd--;
            cout<<odd<<endl;
        }
    }


    return 0;
}