#include <iostream>
using namespace std;

struct User
{
    const int uID;
    const char *name; // const is for pointer not for value
    const char *email;
    int course_count;
};


int main(){
    User akhilesh = {9, "Akhilesh", "akhileshgangawane1@gmail.com", 2};
    User Vayu = {7, "vayu", "vayugangawane1@gmail.com", 8};
    cout<<akhilesh.email<<endl; 
    Vayu.course_count=14;
    cout<<Vayu.course_count;
    // here enmail can be changed even it is using const you can change it cuz reason is above
    return 0;
}