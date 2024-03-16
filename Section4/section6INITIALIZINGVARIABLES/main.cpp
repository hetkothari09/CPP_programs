#include <iostream>

using namespace std;
 
//This Program will calculate the area of room in Square Feet

int main()
{
    int room_width {0};
    int room_length {0};
    
cout<<"Enter the Width of the Room: ";
    cin>> room_width;

    cout<<"Enter The Length of The room: ";
    cin>> room_length;
    
    cout <<"The Area Of the Room is " <<room_length*room_width<<" square feet \n";
    return 0;
}