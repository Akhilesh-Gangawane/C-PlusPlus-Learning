#include <iostream>
using namespace std;

int factorial(int *);

int factorial(int *a){
    if (*a==1 || *a==0)
    {
        return 1;
    }
    else
    {
        int temp = (*a)-1;
        return factorial(&temp)*(*a);
    }
    
}

int main(){
    int a=5;
    cout<<factorial(&a);
    return 0;
}