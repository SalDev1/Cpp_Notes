#include <iostream>
#include "Person.h"
#include "Player.h"
#include "Nurse.h"

int main()
{
    Person person1("Daniel Gray", 27, "Blue Sky St 233 #56");
    cout << "person1 : " << endl;

    cout << "-----------" << endl;

    Player player;
    player.m_full_name = "Samuel Jackson";
    // player.m_age = 55 , Complier error
    // player.m_address = 213132323123 ;  Complier Error

    Nurse nurse1;
    // nurse1.m_full_name = "Davy Johnes"; //Complier Error

    return 0;
}