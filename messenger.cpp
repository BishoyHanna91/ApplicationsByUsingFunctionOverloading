   /*
   Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
  
 this class is the messenger which is an array of linear linked list, and it has function as 
 insert, delete and display. In addition, it has functions overloading as += to insert the
 message and -= to delete the message
  */
# include "messenger.h"
# include<cstring>
/*
    Name of function: contructor
    Input: nothing
    Output: nothing
   
*/
messenger::messenger()
{
    // initializing the data member
    head = NULL;
    
}
/*
    Name of function: destructor
    Input: nothing
    Output: nothing
   
*/
messenger::~messenger()
{
  // call the removeAll function
  removeAll(head);
}
/*
    Name of function: copycontructor
    Input: pointer
    Output: nothing
   
*/
messenger::messenger(node*& head1)
{
   // set the head1 pointer to the data member which is the pointer head
   head = head1;
}
/*
    Name of function: insert
    Input: pointer
    Output: nothing
   
*/
bool messenger::insert( node*& new_node)
{

  // if head point to null
  if(head ==NULL)
   {
       // make head point to the new node
       head = new_node;
    return true;
   }
  else
{
 // make the new node next pointer point to head to insert from the first 
  new_node->set_next(head);

  // make the head point to the new node
  head = new_node;
  return true;   
 }
   return false;
}
/*
    Name of function: display
    Input: pointer
    Output: nothing
   
*/
void messenger ::display(node *&head)
{
  // if head point to null
  if(head ==NULL)
   {
     return ;
   }
   else
      {
          // call this function
          display(head->get_next());
         
          // print the value that the head pointing to
          cout<<*head<<endl;
      }
}
/*
    Name of function: += operator 
    Input: a const of the node obj
    Output: nothing
   
*/
messenger& messenger:: operator +=(const node& n)
{
   // make a new node with the constructor that accepts pointer
   node * t = new node(n);

   //make the ptr pointer point to t 
   node * ptr = t;

  // call this function
   insert (ptr);
   return *this;
  
}
/*
    Name of function: -= operator 
    Input: a const of the node obj
    Output: nothing
   
*/

messenger& messenger::operator -=(const char* to_delete)
{
  // call the deleteText function
  deleteText(to_delete);
  return *this;
}
bool messenger::deleteText(const char* to_compare)
{
	// creating a current pointer
	node* current;

	// creating and setting the prev to NULL
	node* prev = NULL;

	// creating a deletePtr
	node* deletePtr;

	// setting the current and head pointing to the same thing
	current = head;

       if(head== NULL)
{ 
    return true;
}
	// if the data is in the first node
	if((head-> compare(to_compare))==0)
	{
		// setting the deletePtr and the head pointer pointing to the same thing
		deletePtr=head;

		// making the head pointer point to the next node
		head =  head->get_next();

		deletePtr->set_next(NULL);

		// delete the node which is pointed by the deletePtr
		delete deletePtr;   

		return true;

	}
	// if the data in the middle
	while((current->get_next()!=NULL)&&(current->compare(to_compare)!=0)) 
	{
                // set the prev and the current point to the same thing
		prev = current;
                
                // make the current pointer point to the next node
		current = current->get_next();
	}
          

    // if the next of current does not point to null and the string is found 
	if((current->get_next()!=NULL)&&(current->compare(to_compare)==0))
	{
                // setting the deletePtr and the current poit to the same thing 
		deletePtr = current;
                
                // make the  next of the point to the next of the current     
		prev->set_next(current->get_next());
                
                 // make the current point to the prev next pointer
                 current = prev->get_next();
                delete deletePtr;

               return true;    

         }

         // check if it is the last node in the list
	else if ((current->get_next()==NULL)&&(current->compare(to_compare)==0)) 
	{
                // set the deleteptr and the current poin to the same thing 
		deletePtr = current;

                // set next of the prev to null
		prev->set_next(NULL);
                
                

		delete deletePtr;
		return true; 


	}

	else
             
		return false;
               
}
/*
    Name of function: removeAll
    Input: pointer
    Output: nothing
   
*/

void  messenger::removeAll(node *&head)
{
  // make deleteptr pointer 
   node* deletePtr = head;


  // if head is not  null
   if(!head)
    {
      // make deletePtr point to what head pointing to
       deletePtr = head;
       return ;
    }
  else 
    {
     // call this function recursively
     removeAll(head->get_next());
      delete deletePtr;

    // set the deletePtr to null
      deletePtr = NULL;
    }
}
/*
    Name of function: display2 wrapper function
    Input: nothing
    Output: nothing
   
*/

void messenger:: display2()
{
 // call the display function 
 display(head);
}
void messenger::removeAll2()
{
 removeAll(head);
}
