#include <iostream>
#include <queue>
using namespace std;

/*
    - insert takes an existing object and copies or moves it into the container.
    - emplace constructs the object in-place directly inside the container using the arguments you provide.
*/

void priority_queue_explain(){
    /*
     Max Heap => The largest element is always at the top 
    */
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}
    cout<<pq.top(); //Prints 10 as it is largest int of the pq
    pq.pop(); //{8,5,2}
    cout<<pq.top(); //Prints 8

    /*
     Min Heap => The smallest element is always at the top 
     - uses vector<int> as the underlying container to store elements.
     - greater<int> flips the default behavior:
        - Normally, priority_queue<int> uses less<int>, which creates a max-heap (largest element at the top).
        - Using greater<int> creates a min-heap — the smallest element bubbles to the top.

    */

    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{2,5}
    pq1.push(8); //{8,2,5}
    pq1.emplace(10); //{2,5,8,10}

    cout<<pq1.top(); //Prints 2
    


}

/*
    push, pop-> log n
    top -> O(1)
*/


int main(){
    
    return 0;
}