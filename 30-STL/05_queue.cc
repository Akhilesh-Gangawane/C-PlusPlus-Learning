#include <iostream>
#include <queue>
using namespace std;

void learning_queue(){
    queue <int> qu;
    qu.push(1); //{1}
    qu.push(2); //{1,2}
    qu.push(4); //{1,2,4}

    qu.back() += 5; //{1,2,9} 4 -> 4+5=9
    cout<<qu.back()<<endl; // prints 9

    cout<<qu.front()<<endl; //prints 1

    qu.pop(); // {2,9}
    cout<<qu.front()<<endl; //prints 2

    // size, swap, empty, same as stack
}

int main(){
    learning_queue();
    return 0;
}