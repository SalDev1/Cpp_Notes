#include <iostream>
#include <vector> //Import this vector header file.

using namespace std;

// We are taking the reference in the parameter.
// template <typename T>
// T display(T vector<int> &v);

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Initializing an vector.
    // Similar to using the dynamic arrays, which takes care of the size automatically.
    // Cplusplus for documentation.
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector : ";
    cin >> size;
    for (auto i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector : ";
        cin >> element;
        // Pushing pr inserting the elements in the vector created array.
        vec1.push_back(element);
    }

    display(vec1);

    // Helps us to insert elements in the beginning of the vector container.

    // I want to make iterator to point to the first element.

    vector<int>::iterator iter = vec1.begin();
    // You select positions in the vector container ,by performing addition operations with r.begin();
    // r.begin() == 1;
    vec1.insert(iter + 1, 2, 91);

    display(vec1);
    // At :- Helps us to get an element at specific position.
    cout << "The element at position four will be : " << vec1.at(0) << endl;

    return 0;
}