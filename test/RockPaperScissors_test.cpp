#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class name : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_F(name, Player2WinsWhenPlayer1PlaysRockAndPlayer2PlaysPaper)
{
   EXPECT_EQ(PLAYER_2_WINS, play(ROCK, PAPER));
}

TEST_F(name, Player1WinsWhenPlayer1PlaysRockAndPlayer2PlaysScissors)
{
   EXPECT_EQ(PLAYER_1_WINS, play(ROCK, SCISSORS));
}

TEST_F(name, TieWhenPlayer1PlaysRockAndPlayer2PlaysRock)
{
   EXPECT_EQ(TIE, play(ROCK, ROCK));
}

TEST_F(name, Player1WinsWhenPlayer1PlaysPaperAndPlayer2PlaysRock)
{
   EXPECT_EQ(PLAYER_1_WINS, play(PAPER, ROCK));
}

TEST_F(name, Player2WinsWhenPlayer1PlaysPaperAndPlayer2PlaysScissors)
{
   EXPECT_EQ(PLAYER_2_WINS, play(PAPER, SCISSORS));
}

TEST_F(name, TieWhenPlayer1PlaysPaperAndPlayer2PlaysPaper)
{
   EXPECT_EQ(TIE, play(PAPER, PAPER));
}

TEST_F(name, Player2WinsWhenPlayer1PlaysScissorsAndPlayer2PlaysRock)
{
   EXPECT_EQ(PLAYER_2_WINS, play(SCISSORS, ROCK));
}

TEST_F(name, Player1WinsWhenPlayer1PlaysScissorsAndPlayer2PlaysPaper)
{
   EXPECT_EQ(PLAYER_1_WINS, play(SCISSORS, PAPER));
}

TEST_F(name, TieWhenPlayer1PlaysScissorsAndPlayer2PlaysScissors)
{
   EXPECT_EQ(TIE, play(SCISSORS, SCISSORS));
}
