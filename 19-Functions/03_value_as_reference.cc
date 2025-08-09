#include <iostream>
using namespace std;

void lifeUp(int &life){
    ++life;
}

int main(){
    int life =3;
    lifeUp(life);
    cout<<life<<endl; //  you're using a reference—int &life—which acts like an alias to the original variable. So any change to life inside lifeUp() directly affects the original life in main().

    return 0;
}