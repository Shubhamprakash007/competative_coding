//all_of
//none_of
//any_of
//lambda function small syntax to write temp function
#include<bits/stdc++.h>
using namespace std;

int main(){
    //lambda funtion syntax
    //auto sum = [](int x,int y){return x+y;};
    //cout<<sum(2,3)<<endl;
    vector<int> v={2,3,5};
    cout<< all_of(v.begin(),v.end(),
        [](int x){return x%2;}); //like and

    cout<< any_of(v.begin(),v.end(),
        [](int x){return x>0;});//like or

    cout<< none_of(v.begin(),v.end(),
        [](int x){return x>0;});//if none match return true

}
