/*****************************************************************************************
 * Name: game.cpp
 * Description: implementation of class Game
 * **************************************************************************************/

#include "game.hpp"

/*****************************************************************************************
 * Name: Game()
 * Description: Default constructor for class Game
 * Parameters: int num_rooms
 * Pre-conditions: num_rooms must be at least 4
 * Post-conditions: side_rooms, flaming_arrows, dead_wumpus, dead_player, got_gold, rooms,
 * 	current and starting xy coordinates for player and all event rooms are set
 * **************************************************************************************/

Game::Game() {
  this->netherlands.set_team("Netherlands",2,1,0,8);
  this->senegal.set_team("Senegal",2,0,1,18);
  this->england.set_team("England",2,1,0,5);
  this->usa.set_team("USA",1,2,0,16);
  this->argentina.set_team("Argentina",2,0,1,9);
  this->poland.set_team("Poland",1,1,1,26);
  this->france.set_team("France",2,0,1,4);
  this->australia.set_team("Australia",2,0,1,38);
  this->japan.set_team("Japan",2,0,1,24);
  this->spain.set_team("Spain",1,1,1,7);
  this->morocco.set_team("Morocco",2,1,0,22);
  this->croatia.set_team("Croatia",1,2,0,12);
  this->brazil.set_team("Brazil",2,0,1,1);
  this->switzerland.set_team("Switzerland",2,0,1,15);
  this->portugal.set_team("Portugal",2,0,1,9);
  this->southKorea.set_team("South Korea",1,1,1,28);


  // quartfinal teams
	this->QuarterTeam_A.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_B.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_C.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_D.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_E.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_F.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_G.set_team("   ",-1,-1,-1,0);
  this->QuarterTeam_H.set_team("   ",-1,-1,-1,0);

  this->QuarterLoser_A.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_B.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_C.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_D.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_E.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_F.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_G.set_team("   ",-1,-1,-1,0);
  this->QuarterLoser_H.set_team("   ",-1,-1,-1,0);

  // semifinal teams
  this->SemiTeam_A.set_team("   ",-1,-1,-1,0);
  this->SemiTeam_B.set_team("   ",-1,-1,-1,0);
  this->SemiTeam_C.set_team("   ",-1,-1,-1,0);
  this->SemiTeam_D.set_team("   ",-1,-1,-1,0);

  this->SemiLoser_A.set_team("   ",-1,-1,-1,0);
  this->SemiLoser_B.set_team("   ",-1,-1,-1,0);
  this->SemiLoser_C.set_team("   ",-1,-1,-1,0);
  this->SemiLoser_D.set_team("   ",-1,-1,-1,0);

  // final teams
  this->FinalTeam_A.set_team("   ",-1,-1,-1,0);
  this->FinalTeam_B.set_team("   ",-1,-1,-1,0);
  this->FinalLoser_A.set_team("   ",-1,-1,-1,0);
  this->FinalLoser_B.set_team("   ",-1,-1,-1,0);

  // placed teams
  this->firstPlace.set_team("   ",-1,-1,-1,0);
  this->secondPlace.set_team("   ",-1,-1,-1,0);
  this->thirdPlace.set_team("   ",-1,-1,-1,0);
  this->fourthPlace.set_team("   ",-1,-1,-1,0);
}

/*****************************************************************************************
 * Name: ~Game()
 * Description: Destructor for class Game
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

Game::~Game() {
}

/*****************************************************************************************
 * Name: start_game()
 * Description: Start the game
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

void Game::start_game() {

  cout << endl << endl << "Let the shitty games begin." << endl << endl << endl;

  // round of 16
  cout << "==================================== ROUND OF 16 ====================================" << endl << endl;
  playMatch(this->netherlands,this->usa, this->QuarterTeam_A, this->QuarterLoser_A);
  playMatch(this->argentina,this->australia, this->QuarterTeam_B, this->QuarterLoser_B);
  playMatch(this->japan,this->croatia, this->QuarterTeam_C, this->QuarterLoser_C);
  playMatch(this->brazil,this->southKorea, this->QuarterTeam_D, this->QuarterLoser_D);
  playMatch(this->france,this->poland, this->QuarterTeam_E, this->QuarterLoser_E);
  playMatch(this->england,this->senegal, this->QuarterTeam_F, this->QuarterLoser_F);
  playMatch(this->morocco,this->spain, this->QuarterTeam_G, this->QuarterLoser_G);
  playMatch(this->portugal,this->switzerland, this->QuarterTeam_H, this->QuarterLoser_H);

  // quarterfinals
  cout << "==================================== QUARTERFINALS ====================================" << endl << endl;
  playMatch(this->QuarterTeam_A,this->QuarterTeam_B, this->SemiTeam_A, this->SemiLoser_A);
  playMatch(this->QuarterTeam_C,this->QuarterTeam_D, this->SemiTeam_B, this->SemiLoser_B);
  playMatch(this->QuarterTeam_E,this->QuarterTeam_F, this->SemiTeam_C, this->SemiLoser_C);
  playMatch(this->QuarterTeam_G,this->QuarterTeam_H, this->SemiTeam_D, this->SemiLoser_D);

  // semifinals
  cout << "==================================== SEMIFINALS ====================================" << endl << endl;
  playMatch(this->SemiTeam_A,this->SemiTeam_B, this->FinalTeam_A, this->FinalLoser_A);
  playMatch(this->SemiTeam_C,this->SemiTeam_D, this->FinalTeam_B, this->FinalLoser_B);

  // finals
  cout << "==================================== FINALS ====================================" << endl << endl;
  playMatch(this->FinalTeam_A,this->FinalTeam_B, this->firstPlace, this->secondPlace);

  cout << "==================================== LOSER FINALS ====================================" << endl << endl;
  playMatch(this->FinalLoser_A,this->FinalLoser_B, this->thirdPlace, this->fourthPlace);
}

void Game::playMatch(Team& TeamA,Team& TeamB, Team& TeamWinner, Team& TeamLoser) {

  // print teams for match
  cout << "Match: " << TeamA.get_name() << " vs. " << TeamB.get_name() << endl;

  // if wins are higher and rank is higher, they are obvi the winner
  if ((TeamA.get_rank() < TeamB.get_rank()) && (TeamA.get_win() > TeamB.get_win())) {
    TeamA.add_win();
    TeamB.add_loss();
    TeamWinner.set_team(TeamA.get_name(), TeamA.get_win(), TeamA.get_draw(), TeamA.get_loss(), TeamA.get_rank());
    TeamLoser.set_team(TeamB.get_name(), TeamB.get_win(), TeamB.get_draw(), TeamB.get_loss(), TeamB.get_rank());
  }

  // if rank is higher, but wins are the same...Go to higher rank
  else if ((TeamA.get_rank() < TeamB.get_rank()) && (TeamA.get_win() == TeamB.get_win())) {
    TeamA.add_win();
    TeamB.add_loss();
    TeamWinner.set_team(TeamA.get_name(), TeamA.get_win(), TeamA.get_draw(), TeamA.get_loss(), TeamA.get_rank());
    TeamLoser.set_team(TeamB.get_name(), TeamB.get_win(), TeamB.get_draw(), TeamB.get_loss(), TeamB.get_rank());
  }

  // if rank is higher, but wins are lower. Compare to draws. If same, higher rank wins.
  else if ((TeamA.get_rank() < TeamB.get_rank()) && (TeamA.get_win() < TeamB.get_win()) && ((TeamA.get_win() + TeamA.get_draw()) > (TeamB.get_win() + TeamB.get_draw()))) {
    TeamA.add_win();
    TeamB.add_loss();
    TeamWinner.set_team(TeamA.get_name(), TeamA.get_win(), TeamA.get_draw(), TeamA.get_loss(), TeamA.get_rank());
    TeamLoser.set_team(TeamB.get_name(), TeamB.get_win(), TeamB.get_draw(), TeamB.get_loss(), TeamB.get_rank());
  }

  // else, lower team wins
  else {
    TeamA.add_loss();
    TeamB.add_win();
    TeamWinner.set_team(TeamB.get_name(), TeamB.get_win(), TeamB.get_draw(), TeamB.get_loss(), TeamB.get_rank());
    TeamLoser.set_team(TeamA.get_name(), TeamA.get_win(), TeamA.get_draw(), TeamA.get_loss(), TeamA.get_rank());
  }

  // declare outcome
  cout << "Winner: " << TeamWinner.get_name() << endl << endl;
}

/*****************************************************************************************
 * Name: print_bracket()
 * Description: Print the bracket
 * Parameters: None
 * Pre-conditions: None
 * Post-conditions: None
 * **************************************************************************************/

void Game::print_bracket() {
   // print
}
