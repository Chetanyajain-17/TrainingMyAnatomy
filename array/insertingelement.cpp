#include<iostream>
using namespace std;
int main() {
int arr[10]={10,20,30,40,50};
int n=5,pos=1,x=99;
for(int i =n;i>pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=x;
n++;
cout<<"array after insertion"<<endl;
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}