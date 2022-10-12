/* given a array of N integers . giver
Q query in each query give number N
and count that number in the array

constraint
1<=Q<=10^5
1<=a[i]<=10^7
1<=N<=10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int M=1e7+10;
int hsh[M];//global array are 0 initialized

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;++i){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int N;
    cin >> N;
    while(N--){
        int Q;
        cin >> Q;
        cout << hsh[Q] << endl;
    }
}


//time complexity O(n*N)+O(n)=10^10
//in 1 sec 10^7 chal sakti h
//how can we solve this in less time
//pre computation technique
//hash array can solve our problem
//it depends upon size of problem
//negative number solution with maps

