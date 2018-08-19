/* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016

  this class is the maze game which has seven node each node has 
 left and right pointers which are the spot, so the player should 
 try to go to the other node through the left or right pointer
*/
# include"maze.h"
/*
    Name of function: contructor
    Input: nothing
    Output: nothing
   
*/
maze::maze()
{
  
}
/*
    Name of function: set_mazeGame
    Input: pointer of the gameNode
    Output: nothing
   
*/
 bool maze::set_mazeGame(gameNode*& game_Node1)
{

int count1 = 0;
int count2 = 0;  
// create a new node
gameNode* current;
game_Node1 = new gameNode;

// make the current point to this new node of the game
current = game_Node1;

// set the left and the right pointer to null
game_Node1->set_left(NULL);
game_Node1->set_right(NULL);

// for loop to make six nodes for the maze game

for(int i=0;i<6;i++)
{
  // make the left current point to the new game node
  current->get_left() = new gameNode;
  
  // then traverse left again
  current = current->get_left();

   // make the right current point to the new game node
   current->get_right()=new gameNode;

   // then traverse right again
   current = current->get_right();
 char choice = '\0';
cout<<"please enter l for left direction or r for the right direction"<<endl;

// get the choice from the user
cin>>choice;
cin.ignore();

switch (choice)
{
  // if the user press l for left
  case'l':
          // make check that the left pointer point to the game Node
          if((game_Node1->get_left()!=NULL))
       {
          // print this message
          cout<<"you are right"<<endl;
          // traverse again
	  game_Node1 = game_Node1->get_left();
        
         // counts each time the player gets to the right spot 
          count1++;
       }
         else
      
      { 
          cout<<" sorry this is not the correct spot"<<endl;
      }
    break;

  // if the user press r for left
    case 'r':

           // make check that the right pointer point to the game Node
           if((game_Node1->get_right()!=NULL))
       {
           // print this message
          cout<<"you are right"<<endl; 

          // traverse again
	  game_Node1 = game_Node1->get_right(); 
          
         // counts each time the player gets to the right spot  
           count2++;
       }
         else
      
      { 
          cout<<" sorry this is not the correct spot"<<endl;
      }
    break;
  default:
   cout<<"error"<<endl;
 
}    
}
// set the left and the current pointer to null
current->set_left(NULL);
current->set_right(NULL);

// make charater for the choice
cout<<" your score is:  "<<  count1+count2<<endl;
return true;



}
/*
    Name of function: playGame wrapper function
    Input: nothing
    Output: nothing
   
*/
 void maze:: playGame()
{
   // create a game node pointer
   gameNode* game1;
   
   // call this function
   set_mazeGame(game1);

}

