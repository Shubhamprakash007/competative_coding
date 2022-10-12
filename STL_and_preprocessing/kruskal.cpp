#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define llu unsigned llu
#define F first
#define S second

typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vector <iii> g;
vi par;

int fnd(int x){
    if (x == par[x])
        return x;
    par[x] = fnd(par[x]);
    return par[x];
}

void onion(int a, int b){
    par[fnd(a)] = par[fnd(b)];
}

int main() {
    int n, m=0;
    cin>>n;

    int i, ans = 0;
    for (i = 0; i<n; i++)
        par.push_back(i);

    int a,b,w;
    while( cin>>a>>b>>w ){
        m++;
        g.push_back(iii(w, ii(a,b)));
    }
    sort(g.begin(), g.end());

    for(i = 0; i<m; i++){
        if (fnd(g[i].S.F) != fnd(g[i].S.S)){
            ans += g[i].F;
            onion(g[i].S.F, g[i].S.S);
        }
    }

    cout<<ans<<endl;

    return 0;
}
