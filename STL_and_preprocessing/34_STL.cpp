//iterators is just pointer like structure
#include<bits/stdc++.h>
using namespace std;
//auto range based loops

int main(){
    vector<int> v={2,3,4,5,6};
    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";

    }

    cout <<endl;
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    //this line can be replaced by using auto keyword
    /*for(it =v_p.begin();it!=v_p.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/

    for (pair<int,int> value: v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }

    for(auto it =v_p.begin();it!=v_p.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    for (int value: v){ //&value not copy this way
        cout<< value<<" ";
    }
    auto a=1;
    cout<<a<<endl;
    //determines datatype of a
}

/*    cout<<endl;
    //iterator declaration syntax
    vector<int> ::iterator it=v.begin();
    cout << (*it+1) << endl;
    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }
}*/


