#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> akhi; // vector naming
    akhi.push_back(1);    // pushback addes element to the end of the vector, dynamically alocatting memory
    akhi.push_back(2);    
    akhi.push_back(3);    
    akhi.push_back(4);    
    akhi.push_back(5);    

    for (auto i = akhi.begin(); i != akhi.end(); ++i)
    {
        cout<< *i <<endl; /* i is vector iterator, which behaves like a pointer but is a 
                                more sophisticated, safer abstraction provided by the STL.*/

    }
    
    return 0;
}