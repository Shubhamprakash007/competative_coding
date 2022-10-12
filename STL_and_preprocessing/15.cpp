#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
//pre computation technique

int main()
{
    //different techinque o optmize code in cp
    //tips to decrease time complexity
    //one techinque being hashing
    fact[0]=fact[1]=1;
    for(int i=2;i<=N;i++){
        fact[i]=fact[i-1]*i;
    }
    int T;
    cin>>T;
    while(T--){
    int n;
    cin>>n;
    cout<<fact[n]<<endl;
}
//O(T*N)=10^10 old
//O(N+T)=10^5+10^5=2*10^5
}
