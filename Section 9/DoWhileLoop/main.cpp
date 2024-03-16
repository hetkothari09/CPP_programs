// Section 9
// Do-While Loop
// Simple Menu Example

#include <iostream>

using namespace std;

int main ()
{

char selection {};
do {
    cout << "\n--------------------------------------------------" << endl;
    cout << "1.Do This " << endl;
    cout << "2.Do That " << endl;
    cout << "3.Do Something Else" << endl;
    cout << "Q.Quit" << endl;
    cout << "\nEnter your Selection : " ;
    cin >> selection;
    
    if (selection == '1' )
        cout <<"You Chose 1 - doing this !! " << endl;
        
    else if (selection == '2' )
        cout << "You Chose 2 - doing that !!! " << endl;
        
    else if (selection == '3')
        cout << "You Chose 3 - doing something else !!!! " <<endl;
        
    else if (selection == 'Q' || selection == 'q')    
        cout << "GoodByeeeee....." << endl;
        
    else 
       cout << "Unknown Option ..... Try Again ! " << endl;
       
    
}while (selection != 'q' && selection != 'Q' );
    
    

for (;;)    
      cout << endl;
return 0;
    
    
}

