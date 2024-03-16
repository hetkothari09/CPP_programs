// Section 8
// Assignment Operator

#include <iostream>

using namespace std;

int main ()
{
    
    int num1 {10};
    
                                           // This is not assignment statement its initialization.
                                        
    int num2 {20};
    
    
    num1 = 100;           // This is assignment statement ' = '
                                         //num1 = num2   
                                         //num1 = num2 = 1000
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    
    cout << endl;
    
    return 0;
    
}