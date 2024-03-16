// Section 7 
// Vectors 

#include <iostream>
#include <vector> 

using namespace std;

int main () 
{
// vector <char> vowels;        //empty
//vector <char> vowels (5);    // all 5 initialised to ZERO

vector <char> vowels { 'a' , 'e' , 'i' , 'o' , 'u' };
cout << vowels[0] << endl;
cout <<vowels[4] << endl;


// vector <int> test_scores (3);   // 3 elements all initialised to 0
// vector <int> test_scores (3,100) ; // 3 elements all initialised to 100

vector<int > test_scores {100 , 98 , 89 } ;

cout << "\n Test scores using array syntax : " << endl;
cout << test_scores[0] << endl;
cout << test_scores[1] << endl;
cout << test_scores[2] << endl;

/***************************************************************************************/

cout << "\n Test Scores using Vector Syntax : " <<endl;

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << "\n There are " << test_scores.size() << " scores in the Vector " << endl;

        
cout << "\n Enter 3 test scores : " ;
cin >> test_scores.at(0);
cin >> test_scores.at(1);
cin >> test_scores.at(2);

cout << "\n Updated Test Scores : " << endl;

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;

/***************************************************************************************/

cout << "\n Enter a test score to add to the vector : " ;

int score_to_add (0);
cin >> score_to_add ;

test_scores.push_back(score_to_add);

cout << "\n Enter one more test score to add to the vector : " ;

cin >> score_to_add;

test_scores.push_back(score_to_add);

cout << " \n Test scores are now: " << endl;

cout << test_scores.at (0) << endl;
cout << test_scores.at (1) << endl;
cout << test_scores.at (2) << endl;
cout << test_scores.at (3) << endl;
cout << test_scores.at (4) << endl;

cout << " \n There are now " << test_scores.size() << " scores in the vector" << endl;

//cout << " This should cause an exception !! " << test_scores.at[] << endl;

//////////////////////////////////////////////////////////////////////////////////

// Example of a 2D Vector

vector <vector<int> > movie_ratings 
{
    {1,2,3,4},
    {1,2,4,4},
    {1,3,4,5}
};

cout << "\n Here are the movie rating for reviewer #1 using array syntax : " << endl;
cout << movie_ratings[0][0] << endl; 
cout << movie_ratings[0][1] << endl;
cout << movie_ratings[0][2] << endl;
cout << movie_ratings[0][3] << endl;

cout << " \n Here are the movie rating for reviewer #1 using vector syntax : " <<endl;
cout << movie_ratings.at(0).at(0) << endl;
cout << movie_ratings.at(0).at(1) << endl;
cout << movie_ratings.at(0).at(2) << endl;
cout << movie_ratings.at(0).at(3) << endl;

cout << endl;
return 0;




}