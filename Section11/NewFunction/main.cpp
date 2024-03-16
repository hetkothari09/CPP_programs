#include <iostream>
#include <stdio.h>

using namespace std;
void GoodMorning(){
    cout<<"Good Morning To You !"<<endl;
  /*  GoodEvening();
    GoodNight();*/
}
void GoodEvening(){
    cout<<"Good Evening !"<<endl;
}
void GoodNight(){
    cout<<"Good Night!"<<endl;
    GoodMorning();
    GoodEvening();
}

/*
void sayHi(){
    cout<<"Say Hi "<<endl;
    GoodMorning();
    GoodEvening();
    GoodNight();
}*/

void sayHi(string name,int age);
double cube(double num);
 
int main() {
   /* 
    sayHi("Het",19);
    sayHi("Christiano",36);
    sayHi("Messi",35);
    sayHi("Sergio Ramos",34); */

  /*   GoodNight();
    GoodEvening();
     GoodNight();*/
     
     /*double num;
    cout << "Enter a Number : ";
    cin >> num;
    cout<<"The cube of the number "<<num<<" is " <<cube(num)<<endl;
    */
     
     
     /*   double result=cube(3);
        cout<<result;
        */
        
   
     
     cout<<cube(3);
     
     

    return 0;
}


void sayHi(string name,int age){
    cout <<"Hello "<<name<< ". You are of "<< age << " years."<<endl;
}
 
double cube (double num){
    
    return num*num*num;
    /*
    double answer = num*num*num;
    return answer;*/
}