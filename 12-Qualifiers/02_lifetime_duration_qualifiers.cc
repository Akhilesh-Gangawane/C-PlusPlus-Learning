#include <iostream>
using namespace std;

int LifeTime(){
    static int life =3; // Retains its value between function calls. Initialized only once during the program’s lifetime.
    
    return life=life+1;
}

int main(){
    int life=3;
    cout<<"Your life is "<<life<<endl;
    
    life=LifeTime();
    cout<<"Life status updated to: "<<life<<endl;

    life=LifeTime();
    cout<<"Life status updated to: "<<life<<endl;

    return 0;
}