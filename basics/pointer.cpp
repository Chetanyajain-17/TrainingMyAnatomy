//the pointers are used to store the address of the variable and directly access the value
#include<iostream>
using namespace std;
int main(){
    int var,*ptr;
    var=20;
    ptr=&var;
    cout<<"value at ptr"<<ptr<<endl;
    cout<<"value at var"<<var<<endl;
    cout<<"value at *ptr"<<*ptr<<endl;
    return 0;
}