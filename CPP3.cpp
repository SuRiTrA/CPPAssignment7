/*
Create a class for rectangle that stores data of length and breadth and has two functions :
area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects)
of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
*/

#include <iostream>
using namespace std;

class Rectangle
{
  public:
  double length;
  double breadth;
  double area;
  
  double perimeter(double len, double bre);    //to return the perimeter of the rectangle 
  double area(double len, double bre);          //to return the area of the rectangle 
};

double Rectangle::perimeter(int l,int b)
{ 
  return l+b;
}
double Rectangle::area(int l,int b)
{
  return l*b;
}

int main()
{
   double L1,L2,B2,B1;
   Rectangle RL1, RL2;
   cout<<"IMPLEMENTING CLASS CONCEPTS CPP3.cpp";
   cout<<"\n \nPROGRAM TO FIND AREA AND PERIMETER OF A TRIANGLE AND COMPARE IT WITH ANOTHER";
   cout<<"\n \nEnter the length of FIRST rectangle: ";
   cin>>L1;
   cout<<"\n \nEnter the breadth of FIRST rectangle: ";
   cin>>B1;
   cout<<"\n \nEnter the length of SECOND rectangle: ";
   cin>>L2;
   cout<<"\n \nEnter the breadth of SECOND rectangle: ";
   cin>>B2;
   double ar1,ar2,per1, per2;
   ar1=RL1.area(L1,B1);
   per1=RL1.perimeter(L1,B1);
   ar2=RL2.area(L2,B2);
   per2=RL2.perimeter(L2,B2);
   if(ar1>ar2)
   { 
     cout<<"\nArea of Rectangle 1 is greater than Rectangle 2";
   }
   else if(ar1<ar2)
   { 
     cout<<"\nArea of Rectangle 2 is greater than Rectangle 1";
   }
   else
   {
     cout<<"\nArea of Rectangle 1 and Rectangle 2 are equal";
   }
   if(per1>per2)
   { 
     cout<<"\nPerimeter of Rectangle 1 is greater than Rectangle 2";
   }
   else if(per1<per2)
   { 
     cout<<"\nPerimeter of Rectangle 2 is greater than Rectangle 1";
   }
   else
   {
     cout<<"\nPerimeter of Rectangle 1 and Rectangle 2 are equal";
   }
   return 0;
 }
   
