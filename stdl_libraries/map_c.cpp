#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
  Maps are associative containers that store elements in a mapped fashion.
  Each element has a key value and a mapped value.
  No two mapped values can have the same key values.

  Mainly use to store key-value pairs in it.
  //Python ==> Dictionary. Javascript ==> Object.

  Key se map hoti hai value.
*/

int main()
{
  //  In the below map, key is of string data type and value is of int data type.
  map<string, int> marksMap;
  // marksMap
  marksMap["Salman"] = 100;
  marksMap["Harry"] = 98;
  marksMap["Sarah"] = 96;
  // Create an iterator

  marksMap.insert({{"John", 78}, {"Gina", 23}});

  // first = prints out all the keys stored in the map.
  // second = prints out all the values related to the keys in the map.
  map<string, int>::iterator iter;
  for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
  {
    cout << (*iter).first << " : " << (*iter).second << endl;
  }

  // Example 2
  map<int, int> gquiz1;

  // This is one way of inserting key-value pairs in the map.
  gquiz1.insert(pair<int, int>(6, 3));
  gquiz1.insert(pair<int, int>(3, 4));

  cout << endl;
  cout << "The size of marksMap is : " << marksMap.size() << endl;
  cout << "The max_size is : " << marksMap.max_size() << endl;
  cout << "The empty's return value is : " << marksMap.empty() << endl;

  return 0;
}