//in structure every member have same different memory location but in union every element will have same memory location
#include<iostream>
using namespace std;
union Student{
    int rollno;
    char gender;
};
int main(){
    Student s;
    s.gender='F';
    cout<<s.rollno<<":"<<s.gender;
    return 0;
}