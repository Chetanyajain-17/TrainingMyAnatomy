#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    void show()
    {
        cout<<"Roll no"<<rollno;
    }
};
int main(){
    Student s;
    s.rollno=100;
    s.show();
    return 0;
}