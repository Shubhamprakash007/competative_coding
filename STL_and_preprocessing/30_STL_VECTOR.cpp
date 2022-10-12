#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"size :"<<v.size()<<endl;
    for (int i=0; i<v.size();++i){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}

int main(){
    vector<int> &v;//by refrence
    //v(10) vector of 10 size (10,3 )each vlue 3
    //v.push_back(7);
    //vector<pair<int,int>> pv;
    //v.pop_back removes last element //O(1)all
    //vector<int> v2=v; copy totally O(n)
    //v2.push_back(4) added at last of v and shown by v2
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
}
