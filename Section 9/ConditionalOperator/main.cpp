// Section 9 
// Conditional Operator


#include <iostream>

using namespace std;

int main()
{
    
    int num {};
    
    cout <<"Enter an integer : " ;
    cin >> num;
    
    
     if (num %2 == 0 )
   cout << num << " is even " << endl;

    else 
   cout << num << " is odd " << endl;

  cout << num << " is " << (( num %2 == 0 ) ? " even" : "odd " )  << endl << endl;




int num1 {};
int num2 {};

cout << "Enter 2 integers seperated by a space : " ;
cin >> num1 >> num2 ;

if (num1 != num2 ) {
    cout << "\n\nLargest : " << ( ( num1 > num2) ? num1 : num2 ) << endl;
    cout << "Smallest : " << ((num1 < num2 ) ? num1 : num2 ) << endl;
} else{
    cout << "The numbers are the same ! " << endl;
}

cout << endl << endl;
return 0;

}            