#include <iostream>
using namespace std;

int addme(int a, int b){
    return a+b;
}

float addme(float a, float b){
    return a+b;
}

int main(){
    int x=1;
    int y=2;

    float l=4.2;
    float m=7.1;

    cout<<addme(x,y)<<endl;
    cout<<addme(l,m)<<endl; // here compiler is automatically chossing the function based on the datatype "smart compiler"
    return 0;
}