#include <iostream>
using namespace std;

int main(){
    int score =200;
    int *myp = &score;
    printf("The address of pointer is %p\n", myp);
    printf("Score is %d\n", score);

    int &new_score=score;
    new_score=850;
    printf("The value of score pointer is %p\n", myp);
    printf("The update score is %d\n", score);
    return 0;
}

/* So now here we have seen by using '&' symbol first we have assigned it to the value as same as score variable that is 200, but due to use of '&' if we change the value of value which was alongside & the original value of score is also changed and the final value of score variable has became 850 here*/