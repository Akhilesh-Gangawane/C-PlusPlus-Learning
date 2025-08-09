#include <iostream>
using namespace std;

int main(){
    char my_string[]="Akhilesh";
    char my_name[]={'A', 'K', 'H', 'I','L', 0};

    cout<<my_string<<endl;
    for (int i = 0; my_name[i] != 0; i++)
    {
        cout<<my_name[i]<<endl;
    }
    
    return 0;
}