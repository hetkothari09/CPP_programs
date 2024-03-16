// Section 8 Challenge

/* 
In The US:
    1 dollar is 100 cents 
    1 quarter is 25 cents 
    1 dime is 10 cents 
    1 nickel is 5 cents 
    1 penny is 1 cent 
*/

 #include <iostream>
 
 using namespace std;
 
 int main ()
 {
     
    int balance {} ,  dollars {} ,  quarters {} ,  dimes {} , nickels {} , pennies {} ;
     
     const int dollar_value {100};
     const int quarter_value {25};
     const int dimes_value {10};
     const int nickels_value {5};
     
     int change_amount {} ;
     
     cout << "Enter an amount in cents : ";
     cin >> change_amount ;
     
     // Solution 1 : Not using the modulo operator
     
     dollars = change_amount / dollar_value;
     balance = change_amount - (dollars * dollar_value ) ;

     quarters = balance / quarter_value;
     balance -= quarters * quarter_value;
     
     dimes = balance / dimes_value;
     balance -= dimes * dimes_value;
     
     nickels = balance / nickels_value;
     balance -= nickels * nickels_value;
     
     pennies = balance;
     
    cout << "\nYou can provide the change as follows : " << endl;
    cout << "Dollars   : " << dollars << endl;
    cout << "Quarters  : " << quarters << endl;
    cout << "Dimes     : " << dimes << endl;
    cout << "Nickels   : " << nickels << endl;
    cout << "Pennies   : " << pennies << endl;
    
    cout << endl;
    return 0;
    
     
 }