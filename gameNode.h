/* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
  this is the gameNode h file which has the data members 
  and the functions which this class
*/
#include <cstring>
#include<iostream>
using namespace std;
class gameNode
{
   // the data members of the class
   protected:
    gameNode* left;
    gameNode* right;

//the prototype of the functions  
  public:
    gameNode();
   gameNode *&get_right();
   gameNode *&get_left();
    
  void set_right(gameNode* right2);
  void set_left(gameNode* left2); 
};
