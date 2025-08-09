#include <iostream>
using namespace std;

void SayHello(){
    puts("Hello there! ");
} // it should be always above the int main()

void SayTwo(){
    puts("2");
}

int returnTwo(){
    return 2;
}

int main(){
    SayHello();
    SayTwo();
    printf("This is return value that is an integer!!\n");
    cout<<returnTwo();
    return 0;
}

