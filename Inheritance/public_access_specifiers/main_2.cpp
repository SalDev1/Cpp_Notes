#include <iostream>
#include "Person.h"
#include "Player.h"
#include "Nurse.h"
#include "Engineer.h"

int main()
{
    Person person1("Daniel Gray", 27, "Blue Sky St 233 #56"); // base class
    cout << "person1 : " << endl;

    cout << "-----------" << endl;

    Player player; // public inherited from base class
    player.m_full_name = "Samuel Jackson";
    // player.m_age = 55 , Complier error
    // player.m_address = 213132323123 ;  Complier Error

    Nurse nurse1; // protected inherited from base class
    // nurse1.m_full_name = "Davy Johnes"; //Complier Error

    Engineer e1; // private inherted from base class
    // e1.m_full_name = "Oliver Godson";
    // e1.m_age = 55;
    // e1.m_address = ""

    return 0;
}