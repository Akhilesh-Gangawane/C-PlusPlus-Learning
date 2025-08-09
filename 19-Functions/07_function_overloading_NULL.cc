#include <iostream>
// #define NULL 0 // c's way
using namespace std;

void printVal(int a){
    printf("Integer value is %d\n", a);
}

void printVal(double a){
    printf("Integer value is %f\n", a);
}

void printVal(int *a){
    printf("Pointer value %p\n", a);
}


int main(){
    // printVal(NULL); //c's way
    printVal(nullptr);
    return 0;
}