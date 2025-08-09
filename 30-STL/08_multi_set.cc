#include <iostream>
#include <set>
using namespace std;

void multiset_explain(){
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    int count = ms.count(1); // it counts how many occurence of 1 are their
    ms.erase(ms.find(1)); //it will only erase single 1
    ms.erase(1); // it delete all occurences of 1
}

/*
    their is also a thing called as unordered_set which will perform same just stores all the element in random order under set or multiset with time comlexity of O(1)
*/
 
int main(){
    
    return 0;
}