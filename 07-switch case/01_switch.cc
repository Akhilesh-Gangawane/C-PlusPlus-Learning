#include <iostream>
using namespace std;

int main(){
    int rating;
    rating=1;
    switch (rating)
    {
    case 1:
        puts("Rated as 1 star");
        break; // if break is not present then compiler will automatically run the case 2
    case 2:
        puts("Rated as 2 star");
        break;
    case 3:
        puts("Rated as 3 star");
        break;
    case 4:
        puts("Rated as 4 star");
        break;
    case 5:
        puts("Rated as 5 star");
        break;
    default:
        puts("please rate us!");
        break;
    }   
    return 0;
}