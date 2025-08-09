#include <iostream>
using namespace std;

void printVal(int a){
    printf("Integer value is %d\n", a);
}

void printVal(double a){
    printf("Integer value is %f\n", a);
}

int main(){
    printVal(4.5); //it will use whatever function it needed based on the type of argument given
    return 0;
}