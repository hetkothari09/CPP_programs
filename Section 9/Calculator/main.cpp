// Section 9
// Calculator

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    cout << "------------------- WELCOME TO HET'S CALCULATOR ---------------------" << endl;
    vector <int> numbers {};
    char selection {};
    do {
        cout << "\n\nA - Add " << endl;
        cout << "S - Subtract " << endl;
        cout << "Enter your Selection : ";
        cin >> selection;
        
        if (selection == 'a' || selection == 'A'){
            int num1 {};
            int num2 {};
            cout << "Enter two numbers you want to add : ";
            cin >> num1 >> num2;
            cout << "The Addition of the two numbers is :: " << num1 + num2 << endl;
            
        } else if (selection == 's' || selection == 'S'){
            int num1 {};
            int num2 {};
         //   num1 > num2 ;
            cout << "Enter two numbers you want to subtract (Enter Larger no. First) : " ;
            cin >> num1 >> num2;
            cout << "The subtraction of the two numbers is :: " << num1 - num2<< endl;
        
        } else if (selection == 'q' || selection == 'Q' ) {
            cout << "GooD Bye , Come AgaiN ! " << endl;
        
        } else {
            cout << "Unknown Selection " << endl;
        }
    
    } while (selection != 'q' || selection != 'Q') ;
   
    
    
    cout << endl;
    return 0;
}