#include <iostream>
using namespace std;

int power (int baseNum, int powNum){
    int result=1;
    for(int i=0; i<powNum; i++){
        result*=baseNum;                     /**     result = result * baseNum;     **/
    }
    return result;
}


int main() {
    int baseNum;
    int powNum;
    cout <<"Enter the Base Number : ";
    cin>> baseNum;
    cout<<"Enter the Power Number : ";
    cin>>powNum;
    cout<<power(baseNum,powNum)<<endl;
    
    
    
    return 0;
}