//Section 6 
//Global Variales

#include <iostream>
using namespace std;

int age {18}; //Global Variale -not to be used freq.

int main() 
{
    int age {16}; 
    
      //*********************************************************************
     //* If AGE is Declared inside the main then its given first prefernce
    //* And If AGE is not declared inside The main Then It Takes The GLOBAL 
   //* VARIALE........
  // ***********************************************************************
     
    
    cout << age << endl;
    
    return 0;
}