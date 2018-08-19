 /* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
   
  This class is the node of the maze game, and it has 
  two pointers one for the left and one for the right 
*/
# include"gameNode.h"
/*
    Name of function: contructor
    Input: nothing
    Output: nothing
   
*/

gameNode::gameNode()
{
  // initializing the data members of the class

  left = NULL; 
  right =NULL;
}
/*
    Name of function: get_right
    Input: nothing
    Output: the right pointer of the node
   
*/
gameNode*&gameNode::get_right()
{
  return right;
}
/*
    Name of function: get_left
    Input: nothing
    Output: the left pointer of the node
   
*/
gameNode*&gameNode::get_left()
{
  return left;
}
/*
    Name of function: set_right
    Input: pointer
    Output: nothing
   
*/
void gameNode:: set_right(gameNode* right2)
{
 // set the parameter right2 pointer to the right pointer of the data member
 right= right2;
}
/*
    Name of function: set_right
    Input: pointer
    Output: nothing
   
*/
void gameNode::set_left(gameNode* left2)
{
// set the parameter left2 pointer to the left pointer of the data member

 left = left2;
}


