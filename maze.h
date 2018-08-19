/* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
  
  This is the maze.h file which has the data members functions  that it is going to use
*/
# include<cstring>
# include"gameNode.h"
# include <iostream>
using namespace std;
class maze

{
  // the function prototype
  public:
  maze();
 bool set_mazeGame(gameNode*& game_Node1);
 void playGame();
};
