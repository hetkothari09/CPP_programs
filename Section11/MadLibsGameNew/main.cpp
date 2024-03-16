#include <iostream>
using namespace std;

int main() {
    string color,name,PluralNoun;
    
    cout <<"Enter a color: ";
    getline(cin,color);
    cout <<"Enter a Plural Noun : ";
    getline(cin,PluralNoun);
    cout <<"Enter a Name  : ";
    getline(cin,name);
    
    cout<<"\n\nRoses are "<<color<<endl;
    cout<<PluralNoun<<" are blue "<<endl;
    cout<<"I Love "<<name<<endl;
    return 0;
}