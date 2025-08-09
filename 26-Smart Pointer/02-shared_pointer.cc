#include <iostream>
#include <memory> 
#include <string>

using namespace std;

class User{
    public:
        User(){
            cout<<"User created"<<endl;
        }
        ~User(){ 
            cout<<"User destroyed"<<endl;
        }

        void testFunc(){
            cout<<"I am a test function"<<endl;
        }
};

int main(){

    
    {
        unique_ptr<User> sam = make_unique<User>(); 

        // unique_ptr<User> jam = sam; --this is not allowed in case of using unique pointer 
        sam->testFunc();
    }

    {
        shared_ptr<User> tim = make_shared<User>();
        // shared_ptr<User> jim = tim; --this is allowed in shared pointer
        tim->testFunc();
    }

    cout<<"Outside the scope"<<endl;
    
    return 0;
}