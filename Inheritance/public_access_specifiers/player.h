#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"

// Player will do public inheritance from Person
class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
    Player();
    ~Player();

    // See the access we have to inherited members from Person
    void play()
    {
        m_full_name = "Salman"; // OK
        m_age = 55;             // OK
        // m_address = "UFGYEWFGYEWGFY"; Compiler Error
    }

private:
    int m_career_start_year{0};
    double m_salary{0.0};
    int health_factor{0}; // Let's say that it's 0~10
};

#endif // PLAYER_H