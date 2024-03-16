#include <iostream>


using namespace std;

const double pi {3.1459};

double calc_area_circle(double radius){
    return pi*radius*radius;
}
int area_circle{
    double radius{};
    cout<<"Enter the radius of the circle : " ;
    cin>>radius;
    cout <<"The area of the circle with radius "<<radius<<"is " <<calc_area_circle(radius)<<endl;
}
int main() {
    area_circle{};
    return 0;
}
