#include<iostream>
using namespace std;
class Myclass{
    public:
    //constructor
    Myclass(){
        cout<<"constructor is called"<<endl;
    }
    //destructor
    ~Myclass(){
        cout<<"destructor called";
    }
};
int main(){
    //constructor automatically called when object is created;
    Myclass obj;
    return 0;
}
