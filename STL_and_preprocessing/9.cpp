#include <bits/stdc++.h>
using namespace std;
int main(){
    //when need to deal with large numbers
    //consider it as a stirng then convert to integer
    string str;
    cin>>str;
    int last_digit =str[str.size()-1]-'0';
    cout<<last_digit;

}
