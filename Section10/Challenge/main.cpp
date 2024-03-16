// Section 10
// Substitution Cipher : Secret messages in encrypted form

#include <iostream>
#include <string>
#include <cstring>
#include <cctype> 

using namespace std;

int main ()
{
    
    string alphabet {" ]abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"[XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_message {};
    cout << "Enter your Secret Message : " ;
    getline(cin , secret_message);
    
    string encrypted_message {};
    cout << "\nEncrypting Message ......  " << endl ;
    
    for (auto c : secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_character {key.at (position)};
            encrypted_message += new_character;
            
        }else {
            encrypted_message += c; 
        }
    }
    

    cout << "\nEncrypted message : " << encrypted_message << endl << endl << endl;
    
    char response {};
    cout << "Do you want to know the real message ? ( Y / N ) : " ;
    cin >> response;
    
    if (response == 'y' || response == 'Y'){
    string decrypted_message {};
    cout << "\nDecrypting message ...... " << endl;
    
    for (auto c : encrypted_message) {
       size_t position = key.find(c);
       if (position != string :: npos) {
       char new_char {alphabet.at(position)};
       decrypted_message += new_char;
   }else  {
       decrypted_message += c;
   }
   
    }
    
    cout << "\nDecrypted Message : " << decrypted_message << endl << endl << endl;
    
    
    } else {
        cout << "Ok , Its your wish ... Goodbye ! " << endl;
    }
    cout << endl;
    return 0;
    
}



// I DIDNT UNDERSTAND ......
// I ALREADY ASKED SIR ABOUT IT ... 
// BUT I DID SOME MODIFICATIONS BASED ON PREVIOUS KNOWLEGDE