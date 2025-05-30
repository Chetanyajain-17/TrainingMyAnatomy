#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array element";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"after sorting array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}