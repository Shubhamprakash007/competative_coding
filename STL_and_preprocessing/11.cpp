#include <bits/stdc++.h>
using namespace std;

void Hello(){
    cout<<"hello im learning function in c++"<<endl;
}

int sum(int a,int b){
    int result =a+b;
//function execution stops where return lies
    return result;
}

int main(){
    Hello();
    int r=sum(3,5);
    cout<<r;
}
