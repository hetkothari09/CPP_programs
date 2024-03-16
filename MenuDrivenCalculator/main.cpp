#include <iostream>

using namespace std;

int main()
{
   int Your_Choice;
    int num1;
    int num2;

    cout<<"Menu: \n"<<endl;
     cout<<"1.Addition \n"<<endl;
     cout<<"2.Subtraction \n"<<endl;
     cout<<"3.Multiplication \n"<<endl;
     cout<<"4.Division \n"<<endl;
     cout<<"Enter Two Numbers :";
     cin>>num1>>num2;
     cout<<"Enter Your Choice: ";
     cin>>Your_Choice;
     switch(Your_Choice){
         case 1:
         cout<<"The result of Your Addition is : " <<num1+num2<<endl;
         break;
         case 2:
         cout<<"The result of Your Subtraction is : "<<num1-num2<<endl;
         break;
         case 3:
         cout<<"The result of Your Multiplication is : "<<num1*num2<<endl;
         break;
         case 4:
         cout<<"The result of Your Division is : "<<num1/num2<<endl;
         break;
         default:
         cout<<"Sorry Invalid Option!"<<endl;
     }
    return 0;
}
