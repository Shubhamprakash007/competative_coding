#include <bits/stdc++.h>
using namespace std;
//globally we can declare array of higher power using const keyword
int n=1e7;
int a[n];
int main(){
    //local array should be under 10^5 only
    int n,sum=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
     for (int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;

}
