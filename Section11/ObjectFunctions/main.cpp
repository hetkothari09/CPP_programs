#include <iostream>

using namespace std;

class Student {
public:
        string name;
        string major;
        double gpa;
        Student(string aName , string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
    
            bool hasHonors () {
                if (gpa >= 3.5){
                    return true;
                }
                return false;
            }
    
    
    
};




int main() {
    
    Student student1 ("Het","Enginner", 5.0);
    Student student2("Parshwa","Buisness", 4.2);
    Student student3("Mithil", "Commerce", 3.4);
    Student student4("Smruti","MBA",5.6);
    Student student5("Tanvi","CA",5.1);
    Student student6("Prachi","Doctor",4.9);
    
    
        cout << student1.hasHonors();
        cout <<"\n";
        cout << student2.hasHonors();
        cout <<"\n";
        cout << student3.hasHonors();
        cout <<"\n";
        cout << student4.hasHonors();
        cout <<"\n";
        cout << student5.hasHonors();
        cout <<"\n";
        cout << student6.hasHonors();
        cout <<"\n";



    return 0;
}