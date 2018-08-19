/*   
   Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
  protected:

       // the data members 
         char* text;
         node* next;
   public:

      // the functions prototype
        node();
       ~node();
        node *&get_next();
        void set_next(node* next2);
        char* get_text();
        void set_text(char* text2);
        int compare(const char* to_compare);
        friend istream&  operator >>(istream& ,node*);
        friend ostream&  operator <<(ostream& , const node&);
 
  
};
