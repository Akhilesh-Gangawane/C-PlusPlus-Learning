#include <iostream>
#include <stack>
using namespace std;

void stack_learning(){
    stack <int> stk;
    stk.push(2); //{2}
    stk.push(3); //{2,3}
    stk.push(5); //{2,3,5}
    stk.emplace(19); // {19,2,3,5}

    cout<<stk.top()<<endl; //stk[2] is invalid -->Print 19
    stk.pop(); // {2,3,5}
    cout<<stk.top()<<endl; // prints 2
    cout<<stk.size()<<endl; // 3

    cout<<stk.empty()<<endl; //it is the bool type of thing if the stack is empty it will return TRUE else FALSE

    stack <int> s1,s2;
    s1.swap(s2); // it will swap s1 and s2
}

int main(){
    
    return 0;
}