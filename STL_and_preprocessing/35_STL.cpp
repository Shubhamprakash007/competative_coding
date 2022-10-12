//each element of map is a pair
//map is like dictionary of python
//map is not continuous in nature
//keys in map is unique
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout << m.size() <<endl;
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="adc";
    m.insert({4,"afg"});
    auto it= m.find(3);//returns a iterator
    if(it==m.end()){
        cout<<"No Value";//O(log(n))
    } else{
        cout<<(*it).first << " " << (*it).second<<endl;
    }
    print(m);
    //m.erase(3); log(n)  //takes iterator and key as parameter
    //if(it!=m.end())
         //  m.erase(it);
    //m.clear(); clears the map


  /*  map<int ,string> :: iterator it;
    for(it =m.begin();it !=m.end();++it){
        cout<<(*it).first << " " << (*it).second<<endl;
    } */

   /* for(auto &pr:m ){
        cout<<pr.first <<" "<<pr.second<<endl;

    }*/

    map<string,string> mm;
    m["a"]="x";
    m["b"]="y";
    m["c"]="z";//soted in map in red black type O(s.size()*log(n))
}
