#include <iostream>
#include <unordered_map>
using namespace std;
/*
       Hash Table (Array of Buckets):

       +---------+---------+------------------------+---------+---------+
       | Bucket0 | Bucket1 |         Bucket2         | Bucket3 | Bucket4 |
       +---------+---------+------------------------+---------+---------+
       |  Empty  | Key2->  | Key3->                  | Key4->  | Key1->  |
       |         |  Value2 |  Value3                 | Value4  | Value1  |
       +---------+---------+------------------------+---------+---------+
*/
int main()
{
    // Declare an unordered_map
    unordered_map<string, int> umap;

    // 1. Insert elements using different methods
    umap["Key1"] = 10;         // Using the subscript operator []
    umap.insert({"Key2", 20}); // Using the insert method
    umap.emplace("Key3", 30);  // Using emplace (more efficient for creating in-place)

    // 2. Access elements
    cout << "Key1 -> " << umap["Key1"] << endl;    // Output: 10
    cout << "Key2 -> " << umap.at("Key2") << endl; // Output: 20

    // Accessing using at(), throws an exception if the key doesn't exist
    try
    {
        cout << "Key4 -> " << umap.at("Key4") << endl; // Throws an exception
    }
    catch (const out_of_range &e)
    {
        cout << "Key4 does not exist!" << endl;
    }

    // 3. Modify an existing value
    umap["Key1"] = 100;                                  // Modifies the value associated with Key1
    cout << "Modified Key1 -> " << umap["Key1"] << endl; // Output: 100

    // 4. Check if a key exists
    if (umap.find("Key3") != umap.end())
    {
        cout << "Key3 exists with value -> " << umap["Key3"] << endl;
    }
    else
    {
        cout << "Key3 does not exist!" << endl;
    }

    // 5. Delete an element by key
    umap.erase("Key2");
    if (umap.find("Key2") == umap.end())
    {
        cout << "Key2 was deleted!" << endl;
    }

    // 6. Iterate over all key-value pairs
    cout << "\nIterating over the map:" << endl;
    for (const auto &pair : umap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 7. Count the number of elements with a specific key
    if (umap.count("Key1") > 0)
    {
        cout << "Key1 exists in the map!" << endl;
    }

    // 8. Clear all elements from the map
    umap.clear();
    cout << "\nAfter clearing, map size: " << umap.size() << endl; // Output: 0

    return 0;
    unordered_map<char, int> mp;

    // Count Frequency for each char of a string
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
}