#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass(){
        cout<<"constructor is called";
    }
};
int main(){
    //constructor automatically called when object is created;
    Myclass obj;
    return 0;
}
