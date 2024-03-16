//Section 6
// Challenge

#include <iostream>

using namespace std;

int main ()
{
    cout << " Hello, Welcome To Het's Carpet Cleaning Service ! " << endl << endl;
    
    
        int number_of_small_rooms {0} ;
    cout << " How many small rooms would you like to be cleaned ? : ";    
    cin >> number_of_small_rooms;
    
    
    
        int number_of_large_rooms {0};
    cout << " \n How many large rooms would you like to be cleaned ? : ";
    cin >> number_of_large_rooms;
    
    const double price_of_small_room { 25 };
    const double price_of_large_room {  35 };
    
    const double sales_tax { 0.06 };
    const int estimate_expiry {30};      //days
    
    cout << " \n Estimate For Carpet Cleaning Service : " << endl;
    cout << " Number of Small Rooms : " << number_of_small_rooms << endl;
    cout << " Number of Large Rooms : " << number_of_large_rooms << endl;
    
    cout << " Price Per Small Room : $ " << price_of_small_room << endl;
    cout << " Price Per Large Room : $ " << price_of_large_room << endl;
    
    
    cout << " Cost :  $ " << (number_of_large_rooms * price_of_large_room) + 
                                          (number_of_small_rooms * price_of_small_room) << endl;
    cout << " Tax :  $ " << (( price_of_large_room * number_of_large_rooms)  + 
                                        ( price_of_small_room * number_of_small_rooms )) * sales_tax << endl << endl;
    cout << " ============================================================" << endl << endl;
    
    cout << " Total Estimate :  $ " << (( number_of_large_rooms * price_of_large_room) +
                                                    ( number_of_small_rooms * price_of_small_room)) + (((number_of_large_rooms* price_of_large_room) +
                                                    (number_of_small_rooms * price_of_small_room ))) * sales_tax << endl;
                                                    
    cout << " This Estimate is Only Valid For " << estimate_expiry<< "  Days ! " << endl << endl;
    
    return 0;

                                                                                           
                                        
                                
    
}