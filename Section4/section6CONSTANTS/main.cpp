// Section 6 
// Constants 

/*

Pseudocode:  
  
  Prompt the user to enter the number of rooms 
  Display the number of rooms
  Display Price Per room
  
  Display cost : ( number of rooms * price per room )
  Display tax : ( number of rooms * price per room * tax rate )
  Display total estimate : ( number of rooms * price per room ) + 
                                         ( number of rooms * price per room * tax rate ) 
   Display estimate expiration time


===================================================================]

 Het's Carpet cleaning Service 
 Charges $30 per room 
 Sales Tax Rate Is 6%
 Estimates are valid for 30 days
 
 Prompt the user for the number of rooms they would like cleaned
 and provide estimate such as:
 
 Estimate For Carpet Cleaning Service :
 Number of Rooms : 2
 Price per Room : $ 30
 Cost : $ 60
 Tax : $ 3.6
 
 ======================================================================
 Total estimate : $ 63.6
 This estimate is valid for 30 Days.
 
*/



#include <iostream>

using namespace std;

int main()
{
    cout << " Hello, Welcome To Het's Carpet Cleaning Service ! " << endl << endl;

     // or cout <<"endl"<<        or \n before next line's sentence
     
    cout << " How many Rooms Would You Like Cleaned ? : " ;
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};         // days.
    
    cout << " \n Estimate for Carpet Cleaning Service : " << endl;
    cout << " Number of Rooms : " << number_of_rooms << endl;
    cout << " Price per Room :  $" << price_per_room << endl;
    cout << " Cost :  $" << price_per_room * number_of_rooms << endl;
    cout << " Tax :  $" << price_per_room * number_of_rooms * sales_tax << endl << endl;
    cout << "=========================================" << endl<< endl;
    cout << " Total Estimate :  $" << (price_per_room * number_of_rooms) + ( price_per_room * number_of_rooms * sales_tax) << endl;
    cout << " This estimate is Only valid for " << estimate_expiry << " days ! " << endl<<endl;
    
    
    return 0;
    
}