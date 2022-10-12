//lower and upper bound
//both functions returns locations
//array should be shorted
//lower element or greater if not present next element pointer
//kind of searching
//upper bound even if element if present find greater
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int *ptr= lower_bound(a, a+n, 5);
    int *ptr1= upper_bound(a, a+n, 5);
    cout<<(*ptr)<<endl;
    cout<<(*ptr1)<<endl;
}
