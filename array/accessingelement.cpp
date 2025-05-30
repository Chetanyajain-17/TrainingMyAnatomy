#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"array elements";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"2nd element in the array is"<<endl;
    cout<<arr[1];
    return 0;
}