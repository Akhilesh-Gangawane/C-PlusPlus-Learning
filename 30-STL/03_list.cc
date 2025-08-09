#include <iostream>
#include <list>
using namespace std;


/*

    while vector is Fast at end, slow elsewhere. List is Fast anywhere (if iterator is known)    

*/

void list_full(){
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(8); //{8,2,4} --> this is more efficient way of adding element in the front as compared to list
    ls.emplace_front(); // {2,4}
}

/*
    Rest functions are same as vector begin,end,rebegin,rend,clear,insert,size,swap
*/


int main(){
    
    return 0;
}