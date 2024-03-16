// Section 9
// Challengee  !!

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int > numbers {};
    char selection {};
    
    do {
        // Display menu 
        
    cout << "\nP - Print numbers " << endl;
    cout << "A - Add a number " << endl;
    cout << "M - Display Mean of the numbers " << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the Largest number  " << endl;
    cout << "Q - Quit " << endl;
    cout << "\nEnter your choice : " ;
    cin >> selection;
    
    
    if (selection == 'p' || selection == 'P' ){
        if (numbers.size() == 0)
            cout << "[] - The list is Empty ! " << endl;
        else {
            cout << "[";
            for (auto nums : numbers )
                cout << nums << " " ;
            cout << "]" ;
        }    
    } else if (selection == 'a' || selection == 'A') {
        
    int num_to_add {};
    cout << "Enter an Integer you want to add to the Listt : " ;
    cin >> num_to_add;
    numbers.push_back(num_to_add);
    cout << num_to_add << " Added " << endl;
    
    } else if (selection == 'm' || selection == 'M') {
        
        if (numbers.size() == 0)
            cout << "Unable to calculate : NO DATA " << endl;
         else {
             int total {};
         for (auto num : numbers)
                 total += num;
              cout << "The mean is : " << static_cast <double>(total) / numbers.size() << endl;   
         }   
    } else if (selection == 's' || selection == 'S')
        if (numbers.size () == 0)
             cout << "Unable to determine the smallest - LIST IS EMPTYY !! " << endl;
        else {
            int smallest = numbers.at(0);
            for (auto nums : numbers )
                if (nums < smallest )
                    smallest = nums;
             cout << "The smallest number is " << smallest << endl;       
             
        }  else if (selection == 'l' || selection == 'L' )   {
            if (numbers.size() == 0)
                cout << "Unable to determine the largest - THE LIST IS EMPTY" << endl;
           else {
               int largest = numbers.at(0);
               for (auto nums : numbers )
                   if (nums > largest )
                       largest = nums;
              cout << "The largest number is : " << largest << endl;
           }
           
        } else if (selection == 'q' || selection == 'Q'){
            cout << "Goodbyee..." << endl;
        } else {
            cout << "Unknown Selection , Please Try Again ! " << endl;
        }   
           
    }while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}