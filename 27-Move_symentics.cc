#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b){
    int tmp =move(a);
    a=move(b); // move symentic puts less stress on memory
    b=move(tmp);
}

string printMe(){
    return "Hello PrintME daddy!";
}

int main(){

    int a=5;
    int b=8;
    
    // lvalue = Locator value” — refers to an object with a memory address you can access (a & b here)
    // rvalue = “Read value” — refers to a temporary value that doesn’t have a persistent memory address (5 & 8 here)


    swap(a,b);

    cout<< "A: "<<a<<endl;

    // directly referencing function

    string &&s=printMe(); // it not copying all the statement of the function rather it directly referencing the function again good for memory allocation

    return 0;
}