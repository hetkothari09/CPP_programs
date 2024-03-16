// Section 8 
// Challenge in INR
// modulo operator 


#include <iostream> 

using namespace std;

int main ()
{
    
    cout << " -------------------------------------------------------------------------------"<< endl;
    cout << "                          Change Operator For Indian Currency             " << endl<<endl;
    cout << " -------------------------------------------------------------------------------" << endl << endl << endl;
    
    int balance {} ,thousands {} , hundreds {} , tens {} , ruppee {} , paise {} ;

    int change_amount;
    cout << "Enter the value of currency in ruppees : ";
    cin >> change_amount;
    
    const int thousands_value {1000};
    const int hundreds_value {100};
    const int tens_value { 10 } ;
    const int ruppee_value {1} ;

    thousands = change_amount / thousands_value;
    balance = change_amount % thousands_value;
    
    hundreds = balance / hundreds_value;
    balance %= hundreds_value;
    
    tens = balance / tens_value;
    balance %= tens_value;
    
    ruppee = balance / ruppee_value;
    balance %= ruppee_value;
    
    cout << "\nYou can provide this change as follows : " << endl;
    cout << "Thousands : " << thousands << endl;
    cout << "Hundreds  : " << hundreds << endl;
    cout << "Tens      : " << tens << endl;
    cout << "Ruppee    : " << ruppee << endl;
    cout << "Paise     : " << paise << endl;
    
    cout << endl;
    return 0;
    
}