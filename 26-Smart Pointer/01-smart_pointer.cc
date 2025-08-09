#include <iostream>
#include <memory> // without new and delete keyword it manages memory
#include <string>

using namespace std;

class User{
    public:
        User(){
            cout<<"User created"<<endl;
        }
        ~User(){ // this will run at the instance of scope ending
            cout<<"User destroyed"<<endl;
        }

        void testFunc(){
            cout<<"I am a test function"<<endl;
        }
};

int main(){

    // memory only works within scope that is nothing but brackets
    {
        // unique_ptr<User> sam(new User()); ---old syntax

        unique_ptr<User> sam = make_unique<User>(); // sam is a pointer that calls class
        sam->testFunc();
    }

    cout<<"Outside the scope"<<endl;
    
    return 0;
}