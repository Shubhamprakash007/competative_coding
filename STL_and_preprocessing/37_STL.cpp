//unordered maps
#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m){
    cout<< m.size() <<endl;
    for(auto &pr : m){
        cout<< pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    cout<<"hello"<<endl;
    unordered_map<int, string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="adc";
    m[6]="poi";
    m[4]="tyu";
    // auto it=m.find(4);
    // if(it !=m.end())
    //     m.erase(it);
    cout<<"hello"<<endl;
    print(m)
    return 0;
}
