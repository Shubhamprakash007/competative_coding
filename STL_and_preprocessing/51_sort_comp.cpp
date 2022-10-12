#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b){
    if(a<b) return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        //sort(a,a+n,should_i_swap)
        for(int j=i+1;j<n;j++){
            //should i swap function is comparator function
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
