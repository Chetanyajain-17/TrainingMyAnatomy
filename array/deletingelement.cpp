#include<iostream>
using namespace std;
int main() {
int arr[10]={10,20,30,40,50};
int n=5,pos=2;
for(int i =pos;i<n;i++)
{
    arr[i]=arr[i+1];
}
n--;
cout<<"array after insertion"<<endl;
for(int i = 0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
} 
//in the deletion of he the elementin the array we dont change anything till the pos arrive where the deletion should happen after that we just shift the element to the left.