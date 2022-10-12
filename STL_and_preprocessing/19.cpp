/*given array a[N] for q query print
sum of numbers between L to R both
index includd

constraint
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int pf[N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int Q;
    cin>>Q;
    while(Q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
//O(n)+O(Q+(r-l))=10^10
//need to remove nested loop
    //now O(n )
}
