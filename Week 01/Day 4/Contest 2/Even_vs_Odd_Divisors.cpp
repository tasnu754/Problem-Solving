#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, fn = 0, gn = 1;
        cin>>n;

        if(n%2 == 0)
            fn++;
        else    
            gn++;

        for(int i=2; i<=n/2; i++){
            if(n%i == 0){
                if(i%2 == 0){
                    fn++;
                }
                else{
                    gn++;
                }
            }
        }

        if(fn == gn)
            cout<<0<<endl;
        else if(fn > gn)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }


    return 0;
}