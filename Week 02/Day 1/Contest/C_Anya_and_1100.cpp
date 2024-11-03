#include<bits/stdc++.h>

using namespace std;

int count(string s, int pos){
    int cnt = 0;

    for(int i= max(0, pos-3); i<= min((int)s.size()-4, pos); i++){
        if(s.substr(i, 4) == "1100"){
            cnt++;
        }
    }

    return cnt;
}
int count0(string s){
    int cnt = 0;
    int sz = s.size();
    for(int i= 0; i<=sz-4; i++){
        if(s.substr(i, 4) == "1100"){
            cnt++;
        }
    }

    return cnt;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int total = count0(s);

        int q;
        cin>>q;

        while(q--){
            int pos;
            char val;
            cin>>pos>>val;
            pos--;

            int total1 = count(s, pos);
            total -= total1;

            s[pos] = val;

            int total2 = count(s, pos);
            total += total2;
            

            if(total > 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
    }


    return 0;
}