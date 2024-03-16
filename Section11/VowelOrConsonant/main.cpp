#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout <<"Enter an alphabet : ";
    cin>>ch;
    
    /**SWITCH STATEMENTS**/
    
    /*switch(ch){
        case 'A':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'E':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'I':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'O':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'U':
        cout<<"It is an vowel"<<endl;
        break;
        
           case 'a':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'e':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'i':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'o':
        cout<<"It is an vowel"<<endl;
        break;
        
        case 'u':
        cout<<"It is an vowel"<<endl;
        break;
        
        default:
        cout <<"It is a consonant"<<endl;
        
    }*/
    
    /**IF ELSE STATEMENT **/
    
    /*if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"It is a Vowel."<<endl;
    }else{
        cout<<"It is a consonant."<<endl;
    }*/
    
    
    /** IF ELSE LADDER **/
    
    if(ch=='A'){
        cout<<"It is a vowel."<<endl;
    }else if(ch=='E'){
        cout<<"It is a vowel."<<endl;
    }else if(ch=='I'){
        cout<<"It is a vowel."<<endl;
    }else if (ch=='O'){
        cout<<"It is a vowel."<<endl;
    }else if(ch=='U'){
        cout<<"It is a vowel."<<endl;
    }else {

        cout<<"It is a consonant."<<endl;
    }
    
    return 0;
}



