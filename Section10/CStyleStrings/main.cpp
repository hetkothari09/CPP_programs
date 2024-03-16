// Section 10
// C - Style Strings


// strlen -- STRING_LENGTH
// strcpy -- STRING_COPY
//strcat  -- STRING_CONCATENATE (TO JOIN)
//strcmp --STRING_COMPARE


#include <iostream>           
#include <cstring>                          // for c-style string functions
#include <cctype>                           // for character based functions 
#include <string>

using namespace std;

int main ()
{
    
    char first_name  [20] {};
    char last_name   [20] {} ;
    char full_name   [50] {} ;
    char temps          [50] {} ;
    
  //  cout << first_name << endl;                                              // Likely to display garbage 
    
//    cout << "Please Enter your First Name : " ;
//    cin >> first_name;
//    
//    cout << "Please Enter your Last Name : " ;
//    cin >> last_name;
//    
//    cout << "---------------------------------------------" << endl;
//    
//    cout << "Hello , " << first_name << " your first name has " << strlen(first_name) << " characters " << endl;
//    cout << "and your last name, " << last_name<< " has " << strlen(last_name) << " characters " << endl;
//    
//    
//    strcpy(full_name, first_name);                                                    //copy first_name to full_name
//    strcat(full_name, " " );                                                                    //concatenate full_name and a space
//    strcat(full_name , last_name);                                                    //concatenate last_name to full_name
//    cout << "\nYour full name is " << full_name << endl;
    
    
    cout << "---------------------------------------------" << endl;
    
//    cout << "Enter your full name : " ;
//    cin  >> full_name;
//    cout << "Your full name is " << full_name << endl;
    
    
    cout << "Enter your full name : " ;
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;
    
    
    cout << "--------------------------------------------------" << endl;
    strcpy(temps, full_name);
    if (strcmp (temps, full_name) == 0)                                                                                   // COMPARING TEMPS (VARIABLE) AND FULL NAME ::: AND IF 0 COMES AS THE OUTPUT THEN BOTH THE VARIABLES ARE EQUALLLL
        cout << temps << " and " << full_name << " are the same " << endl;
    else
        cout << temps << " and " << full_name << " are different " << endl;
        cout << "-------------------------------------------------" << endl;
        
        
        for (size_t i{0}; i < strlen (full_name); ++i) {
            if (isalpha (full_name[i]))
                full_name[i] = toupper(full_name[i]);
        }
          cout << "Your full name is " << full_name << endl;



         cout << "----------------------------------------------------" << endl;
         if (strcmp (temps, full_name) ==0)
             cout << temps << " and " << full_name << " are the same " << endl;
         else 
             cout << temps << " and " << full_name << " are differerent " << endl;
             
    
      cout << "-----------------------------------------------------" << endl;
        cout << "\n Result of comparing " << temps << " and " << full_name << " : " << strcmp(temps, full_name) << endl;
        cout << "Result of comparing " << full_name << " and " << temps << " : " << strcmp(full_name, temps) << endl;
        

           
    
    
    cout << endl;
    return 0;
    
    
}
