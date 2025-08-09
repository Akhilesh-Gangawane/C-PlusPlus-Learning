#include <iostream>
#include <set>
using namespace std;

void set_explain(){
    set<int> st;

    // it only insert any element once, repeitation is won't happen here

    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4} -->stores everything in sorted order

    /*
        begin, end(), rbegin(), rend(), size(),empty() and swap() are same as above
    */

    auto it = st.find(3); //it=iterator
    auto it = st.find(6); // as 6 is not present in the set then it will print 4 which is the last element of the set 
    cout<< *it;

    st.erase(5); //erases 5 from the set

    int cnt =st.count(1); // it gives how many times 1 came in the set

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); //after erase {1}
}

int main(){
    set_explain();
    return 0;
}