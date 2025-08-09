#include <iostream>
using namespace std;

template <typename T>

T addme(T a, T b){ // T is general datatype here
    return a+b;
}

int main(){
    int a = 8;
    int b = 4;
    float x= 7.12;
    float y=4.48;

    cout<<addme(a,b)<<endl;
    cout<<addme(x,y)<<endl;
    return 0;
}