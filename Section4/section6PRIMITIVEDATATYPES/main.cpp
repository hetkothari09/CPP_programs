//Section 6 
//Primitive Data Types

#include <iostream>

using namespace std;

int main()
{
    /****************************************************************************
     *                                       CHARACTER TYPE
     ****************************************************************************/
     
     char middle_initial {'J'}; //Notice the single Quotes around Characters
     cout << "My Middle Initial Is " << middle_initial <<endl;
     
     
/******************************************************************************
 *                                             INTEGER TYPES
 * *****************************************************************************/
 
 unsigned short exam_score {78}; // Same as unsigned short int exam_score
 cout << "My Exam Score was "<< exam_score <<endl;
 
 
 /*******************************************************************************
  *                                     COUNTRIES REPRESENTED 
  * ******************************************************************************/
  
  int countries_represented {81};
  cout << "The Number Of Countries represented In My Meeting were ."<<countries_represented<<endl;
  
  
/********************************************************************************
 *                                      BIG NUMBERS IN  MILLIONS
 * *********************************************************************************/  
 
 long people_in_florida {30222000};
 cout << "There are about " <<people_in_florida<< " people in Florida ."<<endl;
 
 
 /**********************************************************************************
  *                                    BIG NUMBERS IN BILLIONS 
  * *********************************************************************************/
  
long long people_on_earth {7'900'000'000};
cout << "There are about " <<people_on_earth<< " people on earth ." <<endl;
 
 
/***********************************************************************************
 *                                      BIG NUMERS IN KM 
 * *********************************************************************************/
 
 long long distance_to_alpha_centauri {9'461'000'000'000};
 cout << "The Distance to alpha centauri is " <<distance_to_alpha_centauri<< " Kilometers. "<<endl;
 
 
 /************************************************************************************
  *                                      FLOATING POINT TYPES 
  * ********************************************************************************/
  
    float car_payment {406.89};
    cout << "My car payment is " <<car_payment<< endl;
    
    
    double pi {3.14159};
    cout << "PI is " << pi << endl;
    
    
    /**********************************************************************************
     *                           LARGE NUMBERS WHICH ARE RAISED TO
     * *******************************************************************************/
     
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number." <<endl;
    
    
    /*********************************************************************************
     *                                                    BOOLEAN TYPE
     * *******************************************************************************/
     
     bool game_over {false};   //The Value of false will be '0' and the Value of True will be '1'  . 
     cout << "The value Of GameOver is " << game_over << endl;
     
     
     /*********************************************************************************
      *                                               OVERFLOW EXAMPLE
      * *****************************************************************************/
      
      short value1 {30000};
      short value2 {1000};
      short product {value1*value2};
      
      cout << "The sum of " << value1 <<" and "<< value2 << " is " << product << endl;
      
      return 0;
    
    
 
}