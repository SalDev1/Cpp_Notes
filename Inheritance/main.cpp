#include <iostream>
#include "Player.h"

int main()
{
    // We are deriving these properties from the derived class.
    Player p1("BasketBall", "John", "Snow");
    cout << p1 << endl;

    return 0;
}
