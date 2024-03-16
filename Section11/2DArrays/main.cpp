#include <iostream>
using namespace std;

int main() {
    
    int numberGrid[3][2]= {
                                                {1, 2},
                                                {4, 5},
                                                {7, 8}
                                                
        
    };
    
    for (int i = 0; i < 3; i++){
        for(int j = 0; j< 2 ; j++){
            cout << numberGrid[i][j];
        }
        cout<<"\n"<<endl;
    }
    
    return 0;
}