#include <iostream>
using namespace std;

int main(){
    int array[4];
    array[0]=15;
    array[1]=196;
    cout<<array[0]<<endl;
    
    *array=56;
    // this replace the value of the 0th index if not specified which value to change
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;

    int *ap = array; // designation as a pointer
    ap++;
    *ap=18;// replace the original value of 196 as we hgave added 1 to the pointer address
    cout<<array[1]<<endl;

    return 0;
}