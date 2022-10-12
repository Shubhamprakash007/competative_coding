#include<bits/stdc++.h>
using namespace std;

int printVec(vector<int> &v){
    cout<<"size="<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
     int N;
    cin>>N;
    vector<vector<int>> v; //vector v is storing a vector
    for(int i=0;i<N;++i){
    int n;
    cin>>n;
    vector<int> temp;
//v.push_back(vector<int> ());
    for (int j=0;j<n;++j){
        int x;
        cin>>x;
        temp.push_back(x);

    }
    v.push_back(temp);
}
    v[0].push_back(10);
    v.push_back(vector<int> ());
    for(int i=0; i<v.size(); ++i){
        printVec(v[i]);
    }

    cout<<"first vector first element"<<v[0][0];
    //number of row is fixed
}
