//multiset
//internally use red black tree
//duplicates are allowed
#include<bits/stdc++.h>
using namespace std;

print(multiset<string> &s){
    for(string str:s){
        cout<<str<<endl;
    }
}

int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    //find returns first value of iterator
    auto it=s.find("abc");
    if(it!=s.end())
        s.erase(it);
    //it deleter only one value with iterator where iterator is present

    print(s);

}
