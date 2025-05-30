#include<iostream>
using namespace std;
struct Student{
    int rollno;
    char gender;
};
int main(){
    Student s;
    s.rollno=10;
    s.gender='M';
    cout<<s.rollno<<":"<<s.gender;
    return 0;
}