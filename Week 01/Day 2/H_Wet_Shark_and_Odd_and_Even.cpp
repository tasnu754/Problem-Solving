#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;

    long long arr[n];
    vector<long long> v;
    long long evSum = 0, oddSum = 0, oddCnt = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]%2 == 0)
            evSum += arr[i];
        else{
            oddCnt++;
            v.push_back(arr[i]);
        }
            
    }

    if(oddCnt%2 != 0){
        sort(v.begin(), v.end(), greater<>());
        oddCnt--;
    }
        


        for(long long val:v){
            if(val%2 != 0 && oddCnt > 0){
              oddSum += val;
              oddCnt--;
            }
        }

        cout<<evSum+oddSum<<endl;
    


    return 0;
}