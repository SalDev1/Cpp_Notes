#include <iostream>
using namespace std;

// Size of the object == sum of the sizes of the member variables declared
// in the class.
// Function are affilated to the class.

/*
  Memory variables that has the size of the four ,will be store in the memory variables of four.
*/
// class Wrapper
// {
// public:
//     void do_something()
//     {
//     }
//     void print_info()
//     {
//         std::cout << "var1 : " << m_var1 << std::endl;
//         std::cout << "var2 : " << m_var2 << std::endl;
//         std::cout << "name : " << m_name << std::endl;
//     }

// private:
//     int m_var1{};
//     int m_var2{};
//     std::string m_name{"Lorem ipsum dolor sit amet .."};
// };

class Dog
{
public:
    Dog() = default;

private:
    size_t leg_count;
    size_t arm_count;
    int *p_age{nullptr};
};

// Size of the object == sum of the sizes of the member variables declared
int main()
{
    Dog d1;

    cout << "sizeof(size_t) : " << sizeof(size_t) << endl;
    cout << "sizeof(int*) : " << sizeof(int *) << endl;
    cout << "sizeof(Dog) : " << sizeof(Dog) << endl;

    // string is storing as const char * pointer.
    string name = "I am the king of the universe!"; // 32 bytes.
    cout << "sizeof(name) : " << sizeof(name) << endl;

    return 0;
}