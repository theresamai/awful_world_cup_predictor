/*****************************************************************************************
 * Name: team.cpp
 * Description: implementation of class Game
 * **************************************************************************************/

#include "team.hpp"

/*****************************************************************************************
 * Name: Game()
 * Description: Default constructor for class Game
 * Parameters: int num_rooms
 * Pre-conditions: num_rooms must be at least 4
 * Post-conditions: side_rooms, flaming_arrows, dead_wumpus, dead_player, got_gold, rooms,
 * 	current and starting xy coordinates for player and all event rooms are set
 * **************************************************************************************/

Team::Team() {
}

/*****************************************************************************************
 * Name: ~Game()
 * Description: Destructor for class Game
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

Team::~Team() {
}

void Team::set_team(string name, int win, int draw, int loss, int rank) {
  this->name = name;
  this->win = win;
  this->draw = draw;
  this->loss = loss;
  this->rank = rank;
}

/*****************************************************************************************
 * Name: getters
 * Description:
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

string Team::get_name() {
  return this->name;
}

int Team::get_win() {
  return this->win;
}

int Team::get_draw() {
  return this->draw;
}

int Team::get_loss() {
  return this->loss;
}

int Team::get_rank() {
  return this->rank;
}

/*****************************************************************************************
 * Name: start_game()
 * Description: Start the game
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

void Team::add_win() {
  this->win = this->win + 1;
}

/*****************************************************************************************
 * Name: print_bracket()
 * Description: Print the bracket
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

void Team::add_draw() {
   this->draw = this->draw + 1;
}

/*****************************************************************************************
 * Name: print_bracket()
 * Description: Print the bracket
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

void Team::add_loss() {
   this->loss = this->loss + 1;
}

/*****************************************************************************************
 * Name: print_bracket()
 * Description: Print the bracket
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

void Team::print_info() {
   cout << "Name: " << this->name << endl;
   cout << "W: " << this->win << endl;
   cout << "D: " << this->draw << endl;
   cout << "L: " << this->loss << endl;
   cout << "FIFA ranking: " << this->rank << endl << endl;
}
