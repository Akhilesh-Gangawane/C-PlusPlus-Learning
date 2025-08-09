#include <iostream>
using namespace std;

void lifeUp(int life){
    ++life;
}

int main(){
    int life =3;
    
    lifeUp(life);
    cout<<life<<endl; // here it the value of life is not changing because Because the function is working on a copy of life, not the original. So the original value in main() remains unchanged. That’s it — the entire mystery. 

    return 0;
}