#ifndef PLAYER_H
#define PLAYER_H

#include "Protected.h"
#include <iostream>
using namespace std;

// This dervied class is only able to derive the public
// properties from the base class.
class Player : public Person
{
public:
    Player() = default;
    // Player(string game_param);
    Player(string game_param, string first_name_param, string last_name_param);
    ~Player(){};
    friend ostream &operator<<(ostream &out, const Player &player);

private:
    string m_game{"None"};
};
#endif

/*
  Public keyword is the base access specifier.

  Public:- class Player : public Person
  Person public(m_1) ==> Player public(m_1)
  Person protected (m_2) ==> Player protected(m_2)
  Person private(m_3) ==> Player private(m_3)

  Protected:- class Player : public Person
  Person public (m_1) ==> Player m_1(protected);
  Person protected(m_2) ==> Player m_2(protected);
  Person private(m_3) ==> Player m_3(private);

  Private:- class Player : private Person
  Person public m_1 ==> Player m_1(private);
  Person protected m_2 ==> Player m_2(private);
  Person private m_3 ==> Player m_3(private);


  If we do public inhertiance again anything that is public in base is going to be public.

  Through the base class access specifier, we can control how relaxed or
  constrained is the access of base class members from the derived class.

  Regardless of the access specifier, private members of base class are never
  accessible from derived classes
*/
