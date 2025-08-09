#include <iostream>
using namespace std;

void pairs(){
    pair<int, int> p = {1,3};
    cout<<p.first<<endl<<p.second<<endl;
    cout<<"Now Printing pair inside a pair"<<endl;
    pair<int,pair<int,int>> q = {1,{5,9}};
    cout<<p.first<<endl<<q.second.first<<endl<<q.second.second<<endl;
}

void array_pairs(){
    pair<int,int> arr[] = {{1,2}, {3,4}, {5,1}};
    cout<<arr[0].first<<endl;
    cout<<arr[0].second<<endl;
    
}

int main(){
    // pairs();
    array_pairs();
    return 0;
}