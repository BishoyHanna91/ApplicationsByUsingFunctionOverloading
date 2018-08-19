/* 
  Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016

this is the manager h file that has its data members 
and its functions  
*/
# include"messenger.h"
# include"calculator.h"
# include "maze.h"
class manager
{
   // the data members 
  protected:
    messenger* m;
    calculator c;
    maze g;
   int size; 
 
  // the functions prototype
  public:
   manager();
   void  manageApplication();
   node* makeNode();  
};
