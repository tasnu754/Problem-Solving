#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    deque<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    //     for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }

    int ser = 0, dima = 0, k = 0;

    while(!v.empty()){
        if(k%2 == 0){
            if(v.back() > v.front()){
                ser += v.back();
                v.pop_back();
            }
            else{
                ser += v.front();
                v.pop_front();
            }
            k++;
        }
        else{
            if(v.back() > v.front()){
                dima += v.back();
                v.pop_back();
            }
            else{
                dima += v.front();
                v.pop_front();
            }
            k++;
        }
    }

    cout<<ser<<" "<<dima<<endl;


    return 0;
}