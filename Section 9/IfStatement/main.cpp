// Section 9
// If Statement 
 
#include <iostream>

using namespace std;

int main () 
{
    
int num {};
const int min {10};
const int max {100};

cout << "Enter a numer between " << min << " and " << max << " : " ;
cin >> num;

if (num >= min) { 
    cout << "\n=================================if statement 1==========================" << endl;
    
    cout << num << " is greater than or equal to " << min << endl;
    
    int diff {num - min };
    cout  << num << " is " << diff << " greater than " << min << endl;
}
if (num <= max ) {
        cout << "\n=================================if statement 2==========================" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff {max - num};
        cout << "The number you entered is " << diff << " less than " << max << endl;
}

if (num >= min && num <= max) {
        cout << "\n=================================if statement 3==========================" << endl;
        cout << num << " is in range " << endl;
        cout << "Thid means statements 1 and 2 must also display !! " << endl;
}

if ( num == min || num == max ) {
    
        cout << "\n=================================if statement 4==========================" << endl;
        cout << num << " is right on the boundary " << endl;
        cout << "This means all 4 statements display !!" << endl;
}
 
}