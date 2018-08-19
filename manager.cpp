/* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016

 this class is the manager class which has an objects from the other three,
 and this class has a menu for the user, so he can choose the application which he wants 
 

*/

# include "manager.h"
# include<iostream>
# include <cstring>
# include<ctime>
using namespace std;
/*
    Name of function: contructor
    Input: nothing
    Output: nothing
   
*/


manager::manager()
{
   // set the size for the array of linear linked list
   size = 3;
   
   // creating an array of linear linked list
   m = new messenger[size];
   
}
/*
    Name of function: manageApplication
    Input: nothing
    Output: nothing
   
*/


void manager::manageApplication()
{
  // creating an array for the deleting message
  char* delete_text = new char[50];

  // creating a character for the menu choice 
  char menu_choice;  
  
  // creating an int for the choices for the menu
  int choice, choice2;
  
  // creating a timer
  clock_t time_game;
 
// display the menu
do{
  cout<<" enter 1 to go to messegenger application"<<endl;
  cout<<" enter 2 to go to calculator application"<<endl;
  cout<<" enter 3 to play the maze game"<<endl;

  // the user enters the choice
  cin>>choice;
  cin.ignore(1,'\n');

  switch (choice)
    {
      // the messenger application
       case 1:
               cout<<" enter 1 to send a message"<<endl;
               cout<<" enter 2 to display to the message"<<endl;
               cout<<" enter 3 to delete the message"<<endl;

      // the user enters the option which he wants
             cin>> choice2;
  	      cin.ignore(1,'\n');
      // if it is choice 1, then a message is inserted
          if(choice2 ==1)
             {
              // creating for loop to insert the message in array of linear linked list
              for(int i=0;i<size;i++)
              {
               // += operation overloading for insertion 
               m[i] += *makeNode();
              }                          
             }
      // if it is choice 2 then display the array of linear linked list 
          else if(choice2==2)
            {
               for(int i=0;i<size;i++)
             {
                m[i].display2();
             }
            }
     // if it is choice 3 then the user enters the message that he wants to delete 
          else if(choice2==3)
            {
              // enter this message 
              cout<<" enter the message that you want to delete"<<endl;

              // gets the message that the user wants to delete
              cin.get(delete_text,50);
              cin.ignore();
             for(int i=0;i<size;i++)
             {
              // use this -= operation overloading to delete the message
               m[i] -=(delete_text);              
             }
            }
              
          else
           {
             cout<<"error"<<endl;
           }
        break;
       case 2:
              // this is the second application which is the calculator
               cout<<" please enter the two numbers"<<endl;
              
              // get the numbers by using >> operator overloading
               cin>>c;
               cin.ignore(1,'\n');

              // display the result by << operator overloading
               cout<<c;
               break;
      case 3:
             // this is the third application

           // start the time
          time_game = clock();
          
          // call the play function
          g.playGame();
           
          // end the time and get it
          time_game = clock()-time_game;
          cout<<" you took: "<<(float)time_game/CLOCKS_PER_SEC<< "sec"<<endl;            
            break;
  
      
    
      default:
        cout<<"error "<<endl;
    }
 
    // press y to continue the application
   cout<<" press y to return to the application menu: ";
   cin>>menu_choice; 
   cin.ignore(1,'\n');
} while(menu_choice=='y');
}

/*
    Name of function: makeNode
    Input: nothing
    Output: nothing
   
 this function is for creating a new node for  the messenger,
 so it can be used for += operation which is for insertion
*/

node* manager::makeNode()
{
   // creating new node and get it 
   node* temp = new node;
   cout<<"enter the text message"<<endl;
   cin>> temp;
   
   return temp;
      
}

