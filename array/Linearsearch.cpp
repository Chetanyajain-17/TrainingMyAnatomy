#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int x){
    for(int i =0;i<n;i++){
        if(arr[i]==x){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n,key,result;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"enter the key to search"<<endl;
    cin>>key;
    int arr[n];
    cout<<"enter array element";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    result= linear_search(arr,n,key);
    if(result!=0){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}