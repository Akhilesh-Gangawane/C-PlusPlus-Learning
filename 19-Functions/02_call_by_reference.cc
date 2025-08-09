#include <iostream>
using namespace std;

void lifeUp(int *life){
    ++(*life);
}

int main(){
    int life =3;
    lifeUp(&life);
    cout<<life<<endl; // here the value of life changed as you passed the address of life, so lifeUp() directly modifies the original variable, not a copy.


    return 0;
}