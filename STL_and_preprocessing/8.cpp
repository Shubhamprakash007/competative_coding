#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    //pushbach add string at the end
    cin>>s;
    string str_rev;
    for(int i=s.size()-1; i>=0; --i){
        str_rev.push_back(s[i]);
    }
    cout<< str_rev<<endl;
    //to show string is palindrome or not
    if(s==str_rev){
        cout<<"yes";
    }
    else{
        cout<<"no";
        }
}
