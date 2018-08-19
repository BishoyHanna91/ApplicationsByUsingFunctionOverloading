  /* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016

  this is the messenger h file which has its data members
  and the function prototype
  */

# include"node.h"
class messenger
{
  // the data members 
  protected:
   node* head;
  
// the function prototype
 public:
messenger();
~messenger();
messenger(node *&head1);
bool insert( node *&head);
void display(node *&head);
void  removeAll(node *&head);
bool deleteText(const char* value);
void display2();
void removeAll2();
messenger &operator +=(const node&);
messenger &operator -=(const char*);

 



};
