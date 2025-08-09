#include <iostream>
#include <map>
#include <unordered_map>
#include <functional>
#include <vector>
#include <string>
using namespace std;

void explainMapConcepts() {
    // Ordered Key-Value Storage using std::map
    map<string, int> fruitPrices;
    fruitPrices["apple"] = 100;
    fruitPrices["banana"] = 60;
    fruitPrices["cherry"] = 150;
    
    cout << "\n🔹 std::map stores keys in sorted order:\n";
    for (auto& [fruit, price] : fruitPrices)
        cout << fruit << ": ₹" << price << '\n';

    //  Unordered Constant-Time Access using unordered_map
    unordered_map<string, int> freq;
    string word = "mississippi";
    for (char ch : word)
        freq[string(1, ch)]++;  // Convert char to string for map key

    cout << "\n🔹 Frequency counting with unordered_map:\n";
    for (auto& [charStr, count] : freq)
        cout << charStr << " -> " << count << '\n';

    //  Custom Comparator (reverse order)
    map<int, string, greater<int>> rankToPlayer;
    rankToPlayer[3] = "Player C";
    rankToPlayer[1] = "Player A";
    rankToPlayer[2] = "Player B";

    cout << "\n🔹 Custom ordered map using greater<int>:\n";
    for (auto& [rank, name] : rankToPlayer)
        cout << "#" << rank << ": " << name << '\n';

    //  Memoization Example (Fibonacci with map)
    map<int, long long> fibCache;
    function<long long(int)> fib = [&](int n) -> long long {
        if (n <= 1) return n;
        if (fibCache.count(n)) return fibCache[n];
        return fibCache[n] = fib(n-1) + fib(n-2); // stores and reuses
    };

    cout << "\n🔹 Memoized Fibonacci using map:\n";
    cout << "fib(10) = " << fib(10) << '\n';

    //  Nested Map (Graph Representation)
    map<string, map<string, int>> graph;
    graph["A"]["B"] = 5;
    graph["A"]["C"] = 10;
    graph["B"]["C"] = 3;

    cout << "\n🔹 Nested map representing weighted graph:\n";
    for (auto& [from, edges] : graph) {
        for (auto& [to, weight] : edges)
            cout << from << " -> " << to << " (weight: " << weight << ")\n";
    }

    // Sparse Matrix Example
    map<pair<int, int>, int> sparseMatrix;
    sparseMatrix[{1, 3}] = 10;
    sparseMatrix[{5, 2}] = 7;

    cout << "\n🔹 Sparse Matrix stored with map<pair<int,int>, int>:\n";
    for (auto& [pos, val] : sparseMatrix)
        cout << "cell[" << pos.first << "][" << pos.second << "] = " << val << '\n';
}

int main() {
    explainMapConcepts();
    return 0;
}
