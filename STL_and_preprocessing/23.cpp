/* given 1-indexed array initialized with zero for m
queries add certain f]value from certain range in array

solved using hashing and prefix sum(precomputation techinque) */

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N];

int main(){
    int n,q;
    cin>>n>>q;
    /*for (int i=1;i<=n;i++){
        a[i]=0;
    }*/ //as this a is a global array so already zero initalized
    while(q--){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]+=d;
        arr[b+1]-=d;
    }
    for(int i=1;i<=n;++i){
        arr[i]+=arr[i-1];
    }

    long long int mx=-1;
    for (int i=1;i<=n;++i){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
}

//O(m(b-a)+n)=2*10^5 *10^7=10^12>1sec it should be less than 10^7
