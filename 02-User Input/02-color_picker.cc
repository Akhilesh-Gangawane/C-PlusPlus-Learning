#include <iostream>
using namespace std;

int main(){
    string my_color;
    cout <<"Enter yor fav color. ";
    getline(cin, my_color); // it helps us store multiple character and space too
    cout<< "Your selected color is "<<my_color;
    return 0;
}