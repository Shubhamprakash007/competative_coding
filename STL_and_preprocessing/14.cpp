//print the answer modulo m
#include<bits/stdc++.h>
using namespace std;
int main(){
    //to deal with overflow
    //answer will be less than M
    int n;
    cin>>n;
    int M=47;
    long long fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=(fact*i)%M;
    }
    cout<<fact<<endl;
}
