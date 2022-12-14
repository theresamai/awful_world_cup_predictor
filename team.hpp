/*****************************************************************************************
 * Name: team.hpp
 * Description: header file
 * **************************************************************************************/

#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

class Team {
  private:
    string name;
    int win;
    int draw;
    int loss;
    int rank;

	public:
		Team();
		~Team();
    void set_team(string, int, int, int, int);
    
    string get_name();
    int get_win();
    int get_draw();
    int get_loss();
    int get_rank();

    void add_win();
    void add_draw();
    void add_loss();

    void print_info();
};


#endif
