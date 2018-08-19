/* Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016
  this is the calcultor h file which has the data members 
  and the functions which this class
*/
#include<iostream>
#include<cstring>
using namespace std;
class calculator
{
  // the data members 
   protected:
      double x;
      double y;
      char operation;

  // the functions prototype 
  public:
    calculator();
    
    double result()const;
  friend istream & operator >>(istream&, calculator&); 
  friend ostream & operator <<(ostream&, const calculator&);   
};
