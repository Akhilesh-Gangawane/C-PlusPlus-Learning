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
    cout<<akhilesh.email<<endl; 

    return 0;
}