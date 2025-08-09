#include <iostream>
using namespace std;

int main(){
    char my_name[]={'A', 'K', 'H', 'I','L', 0};

    for (char* chr=my_name ; *chr != 0 ;chr++)
    {
        cout<<*chr<<endl;
    }

    return 0;
}