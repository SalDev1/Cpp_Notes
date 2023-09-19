#ifndef STREAM_INSERTABLE_H
#define STREAM_INSERTABLE_H
#include <iostream>
using namespace std;

// The main focus of the file
class StreamInsertable
{
    friend ostream &operator<<(ostream &out, const StreamInsertable &operand);

public:
    // This method will be call polymorphically.
    // This will call the most specific version of virtual function depending on the type of object been passed in the main function.
    virtual void stream_insert(ostream &out) const = 0;
};

#endif // STREAM_INSERTABLE_H
