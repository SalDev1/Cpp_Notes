#include <iostream>
using namespace std;

static int Professor_id;
static int Student_id;

class Person
{
public:
    virtual void getdata()
    {
        cin >> name;
        cin >> age;
    }

    virtual void putdata()
    {
        cout << name << " " << age << " ";
    }

private:
    string name;
    int age;
};

class Professor : public Person
{
public:
    Professor()
    {
        ++Professor_id;
    };

    virtual void getdata()
    {
        Person::getdata();
        cin >> publications;
        cur_id = Professor_id;
    }

    virtual void putdata()
    {
        Person::putdata();
        cout << publications << " " << cur_id << endl;
    }

private:
    int publications;
    int cur_id;
};

class Student : public Person
{
public:
    Student()
    {
        ++Student_id;
    }

    virtual void getdata()
    {
        Person::getdata();
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
        cur_id = Student_id;
    }

    virtual void putdata()
    {
        Person::putdata();
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        cout << sum << " " << cur_id << endl;
    };

private:
    int marks[6];
    int cur_id;
};
