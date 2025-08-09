#include <iostream>
using namespace std;

int main(){
    int *myp;
    myp = new int [100000]; // new keyword forcefully allocates memory
    printf("Memory ended %p", *myp);

    delete [] myp; // delete the memory allocated to myp
    return 0;
}