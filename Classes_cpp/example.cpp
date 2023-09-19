#include <iostream>
using namespace std;

class Box
{
private:
    int h{};
    int l{};
    int b{};

public:
    Box() = default;
    Box(int l_param, int b_param, int h_param)
    {
        l = l_param;
        b = b_param;
        h = h_param;
    }
    int getBreadth()
    {
        return b;
    }
    int getLength()
    {
        return l;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    friend bool operator<(Box &A, Box &B)
    {
        if ((A.l < B.l) || ((A.b < A.b) && (A.h < B.h)) || ((A.h < B.h) && (A.b == B.h) && (A.l == B.l)))
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    friend ostream &operator<<(ostream &output, const Box &B)
    {
        return output << B.l << " " << B.b << " " << B.h;
    };
};

int main()
{
    return 0;
}