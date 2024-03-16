#include <iostream>

using namespace std;

int main()
{
        int num1;
        int count = 1;
        int New_Num;
        cout<< "Enter the Number : ";
        cin >> num1;
      cout<<"\n"<<endl;
      while (count <= 10)

        {
            New_Num=num1*count;

        cout<<num1<<" * "<<count<<" = "<<New_Num<<endl;
        count++;
        }
        return 0;
}
