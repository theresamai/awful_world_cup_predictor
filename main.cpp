/*****************************************************************************************
 * Program Filename: main.cpp
 * Author: Theresa Mai
 * Date: 12/6/2022
 * Description: Implementation file for 2022 World Cup predictions
 * Input:
 * Output:
 * How to run program: Use "make" to create the executable file.
 * 		       Then do "./app [text file].txt" to begin the program.
 * **************************************************************************************/

#include "game.hpp"
#include "team.hpp"

int main() {

  Game game;
  game.start_game();
	return 0;

}



/*


go into the next round

use formula again

SemifinalTeam_A ... until D

===============================================================================

go into matching

use formula again
-> set winner to FinalTeam_A
-> if else for setting FinalLoser_A

same for B

================================================================================

go into final

use formula again

set winner to firstPlace
set loser to secondPlace w/ if else

================================================================================

go into 3rd place matches

use formula again
set winner to thirdPlace

================================================================================

print bracket
print winners

-===============================================================================

delete memory

*/
