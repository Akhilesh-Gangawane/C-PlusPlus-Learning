#include <iostream>
using namespace std;

int main(){
    int card;
    card = 40;
    int my_card = card;

    int *myp;
    myp = &card;

    my_card = *myp;


    printf("%d\n", my_card);
    printf("%p\n", myp);

    return 0;
}