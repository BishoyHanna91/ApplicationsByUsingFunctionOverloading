/*
   Name: Bishoy Hanna
   Program Number: 3
   Number of classes: 6
   Date: 20/2/2016

This class is the calculator class which has the simple operator as + - * / so it takes 
two numbers and return their result depends on the operator. In addition, it has two function overloading
as istream and ostram, to get the data from the user and output the result 


*/
# include"calculator.h"
/*
    Name of function: contructor
    Input: nothing
    Output: nothing
   
*/
calculator::calculator()

{
  // initializing the data members of the class
 x =0;
 y =0;
 operation = '\0';

}
/*
    Name of function: result
    Input: nothing
    Output: result of each operation
   
*/
double calculator::result()const
{
  // switch to check the case of each operation
  switch(operation)
  {
      // if it is + return the sum of the two numbers
      case '+':
        return x+y;
       break;

  // if it is - return the subtraction of the two numbers
      case '-':
        return x-y;
       break;

 // if it is * return the multiplication of the two numbers
      case '*':
       return x*y;
       break;

 // if it is / return the divisipn of the two numbers
      case '/':
 // i made a try catch to make sure that no problem is happened if 
 // the number divided by zero
     try{
     
        if(y==0)
           throw(y);
        }
     catch(double error)
        {
          cout<<" the number which you entered is not valid= "<<error<<endl;
        } 
       return x/y;
       break;

      defualt:
       cout<<"error"<<endl;
  }
}
/*
    Name of function: istream overloading operation
    Input: istream in, an object of calculator c by refrence
    Output: the istream operation
   
*/
istream& operator >> (istream& in,calculator& c)
{
  // get the data members of the class
  in >> c.x>>c.operation>>c.y;
 
   
 return in; 
}
/*
    Name of function: ostream overloading operator 
    Input: ostream out, an object cf calculator
    Output: the ostream operation
   
*/
ostream& operator <<(ostream& out,const calculator& c)
{
    
    // output the data of the class which is the result
    out<<" The result= "<<c.result()<<endl; 
    return out;  
}

