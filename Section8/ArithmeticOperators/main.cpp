// Section 8 
// Arithmetic Operators

/*
 *      +    ADDITION
 *      *     MULTIPLICATION
 *      -     SUBSRACTION
 *      /     DIVISION
 *      %     MODULO OR REMAINDER (WORKS ONLY WID INTEGERS)
 * 
 * 
 *     + , - , *   AND / OPERATORS ARE OVERLOADED TO WORK WID MULTIPLE TYPES SUCH
 *                                     AS   int, double, etc.
 * 
 *        %     ONLY FOR INTEGER TYPES
 * 
 */
 
#include <iostream>

using namespace std;

int main ()
{
 
int num1 {200};
int num2 {100};

cout << num1 << " + " << num2 << " = " << num1+num2 << endl;

int result {0};

result = num1 + num2 ;
cout << num1 << " + " << num2 << " = " << result << endl;

result = num1 - num2;
cout << num1 << " - " << num2 << " = " << result << endl;

result = num1 * num2;
cout << num1 << " * " << num2 << " = " << result << endl;

result = num1 / num2;
cout << num1 << " / " << num2 << " = " << result << endl;

result = num1 % num2;
cout << num1 << " % " << num2 << " = " << result << endl;               // REMAINDER 


num1 = 10;
num2 = 3 ; 

result = num1 % num2;
cout << num1 << " % " << num2 << " = " << result << endl;

result = num1 * 10 + num2;

cout << 5/10 << endl;
cout << 5.0 / 10.0 << endl;

cout << endl;


   
    
}