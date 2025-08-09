#include <iostream>
#include <map>
using namespace std;

void map_explain(){
    map<int,int> mpp; // first int is for key and other is for value
    map<int,pair<int,int>> mpp_pairval;
    map<pair<int,int>,int> mpp_pairkey; // map store keys in sorted order

    mpp[1]=2; //{1,2}
    mpp.emplace(3,1); //{3,1}
    mpp.insert({2,4}); // {2,4}
    /*
        {
            {1,2}
            {2,4}
            {3,1}
        }
    */

    cout<<mpp[1]; // -> 2 gives the value that is stored at key mentioned
    cout<<mpp[5]; // -> 0 here 5 is not the key of any map so it will return null

    auto it = mpp.find(3);
    cout<< (*it).second; // dot second prints the value that is present at key '3'.
}

void mult_mao(){
    // same as map only stores duplicate keys
}

int main(){
    
    return 0;
} 