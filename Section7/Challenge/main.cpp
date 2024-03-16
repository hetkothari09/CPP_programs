//Section 7 
//Challenge 

#include <iostream>
#include <vector>

using namespace std;

int main () 
{ 
    // Declare 2 empty vectors of integers named vector 1 and 2 respectively
    
    vector <int> vector1;
    vector <int> vector2;
    
    // Add 10 and 20 to vector1 and vector2 dynamically using pushback
    
    vector1.push_back(10) ;
    vector1.push_back(20) ;
    
    
    // Display the elements in vector1 using the at() method as well as size using size() method
    
    cout << "\nVector1 : " << endl;
    cout <<  vector1.at(0) << endl;
    cout <<  vector1.at(1) << endl;
    cout << "Vector1 contains " << vector1.size() << " elements . " << endl << endl;
    
    // Add 100 and 200 dynamically to vector2 using push_back
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    //Display the elements in vector2 using the at() method as well as its size using the size () method
    
    cout << " \nVector2 : " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Vector2 contains " << vector2.size()<< " elements. " << endl;
    
    // Declare an empty 2D  vector called vector_2d
    //Rememer , that a 2D vector is a vector of vector<int>
    
    vector <vector<int>> vector_2d;
    
    // Add vector1 to vector_2d dynamically using push_back
    //Add vector2 to vector_2d dynamically using push_back
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    //Display the elements in vector_2d using the at() method 
    
    cout << "\nVector_2d : " << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  "  << vector_2d.at(1).at(1) << endl;
    
    //Change vector1.at(0) to 100 //It Wont Happen
    
    vector1.at(0) = 1000;
    
    // Display the elements in vector_2d again using at() method
    
    cout << "\nvector_2d :  " << endl;
    cout << vector1.at(0)  << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 Contains " << vector1.size() << " elements." << endl;
    
    return 0;
    
    
    
    
    
    
    
    

}