#include <iostream>
#include <string>
using namespace std;

int main(){
    auto sum = [](auto a, auto b){return a+b;};

    cout<<"Sum of numbers is "<<sum(5,6)<<endl;
    return 0;
}