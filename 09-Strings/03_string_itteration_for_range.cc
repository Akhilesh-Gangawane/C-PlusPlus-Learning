#include <iostream>
using namespace std;

int main(){
    char my_name[]={'A', 'K', 'H', 'I','L', 0};

    for (char i : my_name)
    {
        cout<<i<<endl;
    }
    
    return 0;
}