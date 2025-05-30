//used to reduce the line of code by preventing the coder to write the same set of code again and again
#include<iostream>
using namespace std;
int add(int x, int y){
    int num;
    num=x+y;
    return num;
}
int main(){
    int addition;
    addition=add(4,5);
    cout<<"the sum is"<<endl;
    cout<<addition;
    return 0;
}