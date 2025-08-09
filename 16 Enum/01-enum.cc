#include <iostream>
using namespace std;

enum MsOffice{
    BOLD,
    ITALICS,
    UNDERLINE,
    CROSSED
};

/*

enum MsOffice uint8_t{ // it is unassigned value of 8 bit it will save memory
    BOLD,
    ITALICS,
    UNDERLINE,
    CROSSED
};


*/


/*Enums have auto incrementing value if any value is not given first attribute will be zero automatically BOLD in this case and the second one will be automaticallt 1, but if like i give BOLD=8 then ITALICS will be 9 UNDERLINE will be 10 and so onn if even you can also edit italics, underline like wise and the command forward will react based on that */

int main(){
    int MyAttributes = UNDERLINE;
    cout<<MyAttributes<<endl;
    return 0;
}