#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=4;
    int *p_x=&x;
    cout <<&x<<endl;
    cout <<p_x<<endl;//proved m store ho raha h address
    cout <<*p_x<<endl;
    cout <<p_x-1<<endl;
    *p_x=5;
    cout<<x<<endl;
    int **p_p_x=&p_x;
    cout<<&p_x<<endl;
    cout<<p_p_x<<endl;
    cout<<*p_p_x<<endl;
    cout<<**p_p_x<<endl;
}
