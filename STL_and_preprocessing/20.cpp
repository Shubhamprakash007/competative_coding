/*given matrix calculate sum from(a,b)
to (c,d)

constraints
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
long long pf[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int Q;
    cin>>Q;
    while(Q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
    }
    //O(N^2)+ O(Q)=10^6+10^5=10^6
    //run within 1 sec
    //1 based index is good
}

