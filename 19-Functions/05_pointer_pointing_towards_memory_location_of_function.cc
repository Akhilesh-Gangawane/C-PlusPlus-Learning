#include <iostream>
using namespace std;

int printTwo(){
    return 2;
}

void interesting(){
    puts("This is interesting");
}

int main(){
    int getTwo = printTwo(); // () make the function run
    cout <<getTwo<<endl;

// Pointer plot twist

    void (*pointerString)() = interesting; // () is not here as i don't want to run the function here, pointerString is only getting assigned the memory address of the interesting function it is not asking asking it to run and parenthesis in the variable name let's the compiler behave pointerString as a function

    /*
        pointerString is being assigned the address of the interesting function. The absence of () during assignment means the function is not executed — just referenced. The parentheses later in pointerString() treat the pointer as a callable function.

    */

    pointerString();

    return 0;
}

// This is mere syntax