/**     POINTERS    **/

#include <iostream>
using namespace std;

int main() {
    
    int age=19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Het";
    string *pName = &name;
    
    cout<< pAge<<endl;
    cout<< pGpa<<endl;
    cout<< pName<<endl;
    
    /// Prints the memory adress of the data type 
    /// eg interger string double etcc
    
    /* Deferencing the pointer ... prints the ogi value */
    
    cout << *pAge <<endl;
     
    return 0;
}