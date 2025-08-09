#include <iostream>
using namespace std;

struct User
{
    const int uID;
    const char *name; 
    const char *email;
    int course_count;
};


int main(){
    User akhilesh = {9, "Akhilesh", "akhileshgangawane1@gmail.com", 2};
    User vayu = {7, "vayu", "vayugangawane1@gmail.com", 8};
    User * v= &vayu;

    v->course_count=12; // this is how you have to call course count cuz you are using pointer above
    cout<<v->course_count;
    return 0;
}