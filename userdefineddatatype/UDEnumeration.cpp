#include<iostream>
using namespace std;
enum Week{mon,tue,wed,thur,fri,sat,sun};
int main(){
    enum Week day;
    day=wed;
    cout<<day;
    return 0;
}
