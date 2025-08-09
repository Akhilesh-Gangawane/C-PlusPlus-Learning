#include <iostream>
#include <vector>
using namespace std;

struct Corners
{
    float a,b,c,d;
};

ostream &operator<<(ostream &stream, const Corners &corner){ // this because of, for loop to stream continuous object from struct/class

    /*
        In C++, ostream is a class that handles output operations — it's how you send data out of your program, usually to the console, but also to files or other output destinations

    */
    stream<<corner.a<<" "<<corner.b<<" "<<corner.c<<" "<<corner.d;
    return stream;
}

int main(){
    vector <Corners> corners;
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});

    for (int i = 0; i < corners.size(); ++i)
    {
        cout<<corners[i]<<endl; // error is coming so we have to make a operand above
    }
    

    return 0;
}