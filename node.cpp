/*
   Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
  
  this is the class which is the node, and it has the text message which the user 
  is going to enter. Also, this class has data members and functions. In addition, it has
   operator overloading as istream and ostream
*/
# include "node.h"
#include<cstring>
/*
    Name of function: contructor
    Input: nothing
    Output: nothing
   
*/

node:: node()
{
   // initializing the data members of the class
   text = NULL;
   next = NULL;
}
/*
    Name of function: destructor
    Input: nothing
    Output: nothing
   
*/
node::~node()
{
  // make check if text does not point to null
 
  
    // delete the text
    delete []text;
  
  // text = NULL;
}
/*
    Name of function: get_next
    Input: nothing
    Output: nothing
   
*/
node *&node::get_next()
{
 // return the next pointer
 return next;
  
}
/*
    Name of function: set_next
    Input: pointer
    Output: nothing
   
*/
void node::set_next(node* next2)
{
// set the pointer parameter to the pointer of the data member which is next
next = next2;

}
/*
    Name of function: get_text
    Input: nothing
    Output: nothing
   
*/
char* node::get_text()
{
  return text;
}
/*
    Name of function: set_text
    Input: char
    Output: nothing
   
*/
void node::set_text(char* text2)
{
    // create memory for the text 
    text = new char[strlen(text2)+1];

   // copy it from the parameter to the data member which is text
   strcpy  (text,text2);
}
/*
    Name of function: compare
    Input: char
    Output: nothing
   
*/
int node::compare(const char* to_compare)
{
  // this function to make chech about the value which is entered the 
  // list is the same which in the class 

  return strcmp(text,to_compare);

}
/*
    Name of function: operator overloading >>
    Input: istream object, node object
    Output: nothing
   
*/
istream& operator >> (istream& in,node* n)
{
  // create an array for temp
  char temp[50];
  // get the temp from the user  
  in.getline(temp,50,'\n');
  
   // create memory for the text
  n->text=new char[strlen(temp)+1];
  // copy it
  strcpy(n->text,temp);

  return in;
  
}
/*
    Name of function: operator overloading <<
    Input: ostream object, node object
    Output: nothing
   
*/
ostream& operator <<(ostream& out,const  node& n)
{
  // display the text 
  out <<n.text<<endl;
	return out;
}

