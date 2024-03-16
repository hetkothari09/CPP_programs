#include <iostream>
using namespace std;
int main() {
    int secretNum=6;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    bool outOfGuesses=false;
    
    cout <<"--------------------------------------------------------------------------------"<<endl;
    cout <<"This is a Guessing Game . You Have to Guess the Secret Number . You only Have 3 Guesses ."<<endl;
    cout<<"--------------------------------------------------------------------------------\n\n\n"<<endl;
    while(secretNum != guess  &&  !outOfGuesses){
        if (guessCount< guessLimit){
                cout<<"Enter a Guess : ";
                cin>>guess;
                guessCount++;
        }else {
                outOfGuesses = true;
        }
    }
    
    if (outOfGuesses){
            cout<< "You Lose !"<<endl;
    }else {
            cout<<"Bravo, You Win !"<<endl;
            }
    
    return 0;
}