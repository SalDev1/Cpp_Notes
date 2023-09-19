#include <unordered_set>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    unordered_set<int> set1 = {0, -1, 2, -3, 1, 98};

    unordered_set<int>::iterator iter;
    for (iter = set1.begin(); iter != set1.end(); iter++)
    {
        cout << (*iter) << endl;
    }
    return 0;
}

/*
  An unordered_set is implemented using a hash table where keys are hashed into indices
  of a hash table so that the insertion is always randomized. All operations on the unordered_set takes
  constant time O(1) on an average which can go up to linear time O(n) in worst case which depends
  on the internally used hash function, but practically they perform  very well and
  generally provide a constant time lookup operation.
*/