// Section 8 
// Equality Operators


#include <iostream>

using namespace std;

int main ()
{
    
     bool equal_result {false};
     bool not_equal_result {false};
     
     int num1 {} , num2 {};
     
   cout << boolalpha ;                                                 // will display true/false  instead of 1/0 for booleans      
//     cout << "Enter the integers seperated by a space : ";
//     cin >> num1 >> num2 ;
//     equal_result = (num1== num2 );
//     not_equal_result = (num1 != num2 ) ;
//     cout << "Comparision result ( equals) : " << equal_result << endl;
//     cout << "Comparision result (not equals) : " << not_equal_result << endl;
//    

char char1 {} , char2 {} ;
cout << "Enter the 2 characters seperated by a space : " ;
cin >> char1 >> char2 ;
equal_result = (char1 == char2 );
not_equal_result = (char1 != char2 ) ;
cout << "Comparision result (equals) : " << equal_result << endl;
cout << "Comparision result (not equals) : " << not_equal_result << endl << endl << endl ;
 
 
 double double1 {} , double2 {} ;
 cout << "Enter the 2  doubles seperated by a space : " ;
 cin >> double1 >> double2 ;
 equal_result = (double1 == double2 );
 not_equal_result = (double1 != double2 ) ;
 cout << "Comparision result (equals) : " << equal_result << endl;
 cout << "Comparision result (not equal) : " << not_equal_result << endl << endl << endl;
 
 
 
 cout << "Enter an integer and a double seperated by a space : " ;
 cin >> num1 >> double1;
 equal_result = (num1 == double1);
 not_equal_result = ( num1 != double1);
 cout << "Comparision result (equals) : " << equal_result << endl;
 cout << "Comparision result (not equals) : " << not_equal_result << endl;
 
 
 cout << endl << endl;
 return 0;
 
}