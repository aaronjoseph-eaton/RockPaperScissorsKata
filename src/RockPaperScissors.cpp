#include "RockPaperS cissors.h"

using namespace std;

/* alternative form that uses actual enum values */
result_t play(play_t player1, play_t player2)
{
     return ((player1 == player2) ? TIE : (((player1 + 1) % 3 == player2) ? PLAYER_2_WINS : PLAYER_1_WINS));
}
