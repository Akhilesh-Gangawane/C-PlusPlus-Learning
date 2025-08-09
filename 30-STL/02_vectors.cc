#include <iostream>
#include <vector> // vector are dynamic in nature
using namespace std;

/*
    vectors create empty container
*/

void vectors_explain(){
    vector<int> v_intro;
    v_intro.push_back(8); // add 8 in the empty container
    v_intro.emplace_back(4); // add 4 at the last position of the empty container by dynamically increasing the size of the container

    // vector pairs
    vector<pair<int,int>>vec;
    vec.push_back({1,2}); // here it add 1,2 in the container as a pair as we have provided that in the curly braces
    vec.emplace_back(5,6);  // here it assumes that we have to add this in pair dynamically

    vector <int> v(5,100); // {100,100,100,100,100}

    /* and to copy all the elements of this vector into another vector */
    vector <int> v1(v); // this will copy all the elements of the vector 'v' in 'v1'
    
    /*
        here this vector is also dynamic in nature you can even add elements by using push_back or emplace_back
    */

    // how to access the normal vector
    cout<<v_intro[0]<<endl; /* or */ cout<<v_intro.at(1)<<endl;    

    for (int i = 0; i < v.size(); i++) //v.size() gives the size of the vector
    {
        cout<<v[i]<<endl;
    }
    
}


/*
    iterators in a vector are like smart pointers that let you navigate, access, and manipulate elements in a clean, flexible way
*/

void vector_iterators(){
    vector <int> v;
    v.push_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(7);

    vector <int>::iterator it=v.begin();
    it++; // same way you can do it=it+2 and as follows
    cout<< *(it) <<" ";  // * here means that it is pointing to the direct memory address of iterator and to print the output this has to be in in pointer
    vector <int> :: iterator it1=v.end(); // to print the last value of the vector
    cout<<*(it1)<<" "<<endl;
    cout<<"Printing everything using loops"<<endl;

    /* how to print entire iterator vector */
    for (vector <int> ::iterator it =v.begin();  it!=v.end()  ; it++)
    {
        cout<<*it<<endl;
    }
    cout<<"this is using auto method"<<endl;
    // to write this in short
    for ( auto it =v.begin(); it != v.end() ; it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;
    for (auto it:v)
    {
        cout<<it<<endl; // here pointer is not necessary
    }
    

    v.erase(v.begin()+1); // it will erase the second element

    // {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} {start,end}

    // {10,20}
    v.size(); //gives the size of the vector starting from 1 -> 2

    // {10,20}
    v.pop_back(); //{10}

    /*
        v1 -> {10,20}
        v2 -> {50,96}
        v1.swap(v2) _______ v1->{20,96} and v2->{10,20}
    */

    v.clear(); // erases the entire vector

    cout<<v.empty(); // it is the bool type of thing if the vector is empty it will return TRUE else FALSE
}

void vector_insert(){
    vector<int> v(2,100);
    v.insert(v.begin(),300); //{300,100,100} -->single element insert
    v.insert(v.begin()+1, 2, 65); //{300,65,65,100,100} -->double element insert

    // insert the copy of other vector in other vector
    vector<int> copying_vector(3,89); // {89,89,89}
    v.insert(v.begin(), copying_vector.begin(), copying_vector.end()); //{89,89,89,300,65,65,100,100}
}

int main(){
    vectors_explain();
    vector_iterators();
    vector_insert();

    return 0;
}