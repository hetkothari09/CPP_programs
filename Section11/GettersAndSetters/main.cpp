#include <iostream>

using namespace std;

class Movie {
        private:
                string rating;
    
    
        public:
                string title;
                string director;
//            string rating;
                
            Movie(string aTitle , string aDirector , string aRating){
                title = aTitle;
                director = aDirector;
                setRating = (aRating);

            }
    
    /** when a thing is in private the int main function cannot access it 
     * only the functions in the class ( movie) can access it , and to modify it 
     * we can create a seperate function in the class itself and then modify it in the 
     * main function because the new function wont be private and it can have access 
     **/
    
        void setRating (string aRating){
            
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else {
                rating ="NR";
            }
        }
    
    string getRatign () {
        return rating;
    }
    
};


int main() {
     
        Movie avengers ("The Avengers", "Joss Whendon", "PG-13") ;
        
        avengers.setRating("Dog");
        
        cout << avengers.getRating();
       

    return 0;
}