// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;
    
    
//     while(t--){
    
//         int n;
//         cin>>n;

//         int a = 0, b = 0;

//         vector<bool> v(n);
//         for(int i=0; i<n; i++){
//             bool x;
//             cin>>x;
//             v[i] = x;
//             if(x==1) a++;
//             else b++;
//         }

//         long long ans = 0;



//         if(a!=0 && b!=0){
//             ans += ((a-1)*2 + 2 + (b-1)*2 );
//         }
//         else if(a==0){
//             ans += ( 1 + (b-1)*2 );
//         }
//         else if(b==0){
//             ans += ((a-1)*2 + 1 );
//         }

//         cout<<ans<<endl;
    
//     }


//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){

        int n;
        cin>>n;  

        vector<bool> v(n);
        set<int> idx1;
        set<int> idx0;

        for(int i=0; i<n; i++){
            bool x;
            cin>>x;
            v[i] = x;

            if(x==1) idx1.insert(x);
            else idx0.insert(x);
        }

        for(int i=0; i<n; i++){
        
            if(v[i]==1){
                
            }
        
        }

    
    }


    return 0;
}