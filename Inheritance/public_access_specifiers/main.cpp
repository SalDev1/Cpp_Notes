#include <iostream>
#include "person.h"
#include "player.h"

int main()
{
    Person p1("Daniel Gray", 27, "Blue Sky St 233 #56");
    cout << p1 << endl;

    cout << "-------" << endl;

    Player player;
    player.m_full_name = "Samuel Jackson";
    // player.m_age = 55; // We can't use m_age outside of the player object
    // player.m_address = "2i892317322" , Compile Error
    return 0;
}