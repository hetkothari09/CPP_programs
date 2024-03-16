// Section 8 
// Indian Rupee to USD

#include <iostream> 

using namespace std;

int main ()
{    
    
     const double usd_per_inr { 74.41 } ;
     cout << "------------------------------------------------------------------"<< endl;
     cout << "                    Welcome To The USD to INR converter ! " << endl;
     cout << "------------------------------------------------------------------" << endl << endl;
     cout << "Enter the value in USD : "  ;
     
     double dollar { 0.0 } ;
     double rupee { 0.0 } ;
     
     cin >> dollar ;
     
     rupee = usd_per_inr * dollar ;
     
     cout<< "\n\n" << dollar << "$ are equivalent to " << rupee << " Indian Rupees. " << endl;
     
     cout << endl;
     
     
}