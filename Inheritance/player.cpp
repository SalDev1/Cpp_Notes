#include "Player.h"
#include "Protected.h"

// Player::Player(string game_param):m_game(game_param)
// {
//     m_game = game_param;
// }

Player::Player(string game_param, string first_name_param, string last_name_param)
{
    // Using protected keyword , we are able to modify the member variables of the base class.
    // into the methods of the player class(derived).
    m_game = game_param;
    first_name = first_name_param;
    last_name = last_name_param;
}

ostream &operator<<(ostream &out, const Player &player)
{
    out << "Player : [ game : " << player.m_game << " , names : " << player.get_first_name()
        << " " << player.get_last_name() << " ] " << endl;
    return out;
}