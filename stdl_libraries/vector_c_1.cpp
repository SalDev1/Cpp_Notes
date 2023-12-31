#include <iostream>
using namespace std;

#include <vector>

/*
  Class Templates Like function templates, class templates are useful when a class defines something that is independent of the data type.
  Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.
*/
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector.
    vector<int> vec1;        // zero-length integer vector
    vector<char> vec2(4);    // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2;

    vector<int> vec4(4, 13); // 6-element vector of 3s.

    vec2.push_back('5');
    display(vec3);
    display(vec4);

    cout << vec4.size() << endl;
    return 0;
}