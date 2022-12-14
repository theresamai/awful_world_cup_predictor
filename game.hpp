/*****************************************************************************************
 * Name: game.hpp
 * Description: header file
 * **************************************************************************************/

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include "team.hpp"

using namespace std;

class Game {
  private:

    // all Teams in knockouts
    Team netherlands;
    Team senegal;
    Team england;
    Team usa;
    Team argentina;
    Team poland;
    Team france;
    Team australia;
    Team japan;
    Team spain;
    Team morocco;
    Team croatia;
    Team brazil;
    Team switzerland;
    Team portugal;
    Team southKorea;

    // quartfinal Teams
    Team QuarterTeam_A;
    Team QuarterTeam_B;
    Team QuarterTeam_C;
    Team QuarterTeam_D;
    Team QuarterTeam_E;
    Team QuarterTeam_F;
    Team QuarterTeam_G;
    Team QuarterTeam_H;

    Team QuarterLoser_A;
    Team QuarterLoser_B;
    Team QuarterLoser_C;
    Team QuarterLoser_D;
    Team QuarterLoser_E;
    Team QuarterLoser_F;
    Team QuarterLoser_G;
    Team QuarterLoser_H;

    // semifinal Teams
    Team SemiTeam_A;
    Team SemiTeam_B;
    Team SemiTeam_C;
    Team SemiTeam_D;

    Team SemiLoser_A;
    Team SemiLoser_B;
    Team SemiLoser_C;
    Team SemiLoser_D;

    // final Teams
    Team FinalTeam_A;
    Team FinalTeam_B;

    Team FinalLoser_A;
    Team FinalLoser_B;

    // placed Teams
    Team firstPlace;
    Team secondPlace;
    Team thirdPlace;
    Team fourthPlace;

	public:
		Game();
		~Game();
    void start_game();
    void playMatch(Team&,Team&,Team&,Team&);
    void print_bracket();
};


#endif
