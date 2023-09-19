#include <iostream>
#include <list>
using namespace std;

// Printing out the elements in the list.
void display(list<int> &lst)
{
    // Create an iterator.
    list<int>::iterator it;
    // Then use the list to print out all the elements from the array.
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // List ==> It is a bidirectional list in which the insertion and deletion is fast.
    // If you want to perform insertion and deletion faster or need fast access , use the list.

    list<int> list1; // List of 0 length

    list1.push_back(5);
    list1.push_back(17);
    list1.push_back(9);
    list1.push_back(11);
    list1.push_back(12);

    // list<int>::iterator iter;
    // iter = list1.begin(); // begin() function returns an iterator pointing to the first element of the list.
    // cout << *iter;
    // iter++;
    // cout << endl;

    display(list1);

    // Sorting the list.
    cout << endl;
    list1.sort();
    display(list1);

    // Reversing the list
    list1.reverse();
    cout << "The reversed list is : " << endl;
    display(list1);

    // Delete operations from the list.
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(9);
    // display(list1);

    list<int> list2(3); // Empty list of size 7
    list<int>::iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 55;
    it++;
    *it = 34;
    it++;

    cout << endl;
    display(list2);

    cout << endl;
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "List 1 after merging : " << endl;
    display(list1);

    return 0;
}