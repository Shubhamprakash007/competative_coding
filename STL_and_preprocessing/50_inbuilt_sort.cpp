#include<bits/stdc++.h>
using namespace std;
//intro sort mix of three sorting algo best sorting algo out there
//quick heap insertion sort

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    //sort(a+2,a+3); start and end address
    //for vector sort(a.begin(),a.end())
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
