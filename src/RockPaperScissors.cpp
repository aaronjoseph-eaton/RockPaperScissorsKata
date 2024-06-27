#include "RockPaperScissors.h"

using namespace std;

result_t play(play_t player1, play_t player2)
{
    return (result_t)(((player2 << 1) + player1) % 3);
}