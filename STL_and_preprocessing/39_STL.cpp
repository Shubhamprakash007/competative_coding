
//set of stl
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(auto it=s.begin();it!=s.end();++it){
        cout<< (*it) <<endl;

    }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("bcd");
    s.insert("cde");
    auto it = s.find("bcd");
    //to deal with end value and segmentaton fault
    if(it!=s.end()){
       // cout<<(*it)<<endl;
        s.erase("cde");
    }
    print(s);
}
