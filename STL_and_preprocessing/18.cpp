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
const int N=1e5+10
int a[N];
int main(){
    int N;
    cin>>N;
    for(int i=1;i<N;++i){
        cin>>a[i];
    }
    int Q;
    cin>>Q;

    while(Q--){
        int l,r;
        cin>>l>>r;
        long long int sum=0;
        for (int i=l;i<=r;i++){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }

}
