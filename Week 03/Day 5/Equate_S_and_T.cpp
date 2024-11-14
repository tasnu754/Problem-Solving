#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int sn, tn;
        cin>>sn>>tn;

        string s, t;
        cin>>s>>t;

        int sa = count(s.begin(), s.end(), 'a');
        int sb = count(s.begin(), s.end(), 'b');

        int ta = count(t.begin(), t.end(), 'a');
        int tb = count(t.begin(), t.end(), 'b');

        if(sa != ta)
            cout<<"No"<<endl;

        else if(sb > tb){
            int dif = tb - sb;
            if(sa < dif)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }

        else if(tb > sb){
            int dif = tb - sb;
            if(ta < dif)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;           
        }
        else
            cout<<"Yes"<<endl;

    }


    return 0;
}