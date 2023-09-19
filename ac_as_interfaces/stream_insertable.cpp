#include "stream_insertable.h"
#include <iostream>
using namespace std;

// This method will be call polymorphically.
// This calls specific version of stream insert depending upon the reference being passed in the second parameter.
ostream &
operator<<(ostream &out, const StreamInsertable &operand)
{
    operand.stream_insert(out);
    return out;
}
