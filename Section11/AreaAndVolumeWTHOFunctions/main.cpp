#include <iostream>


using namespace std;

const double pi {3.1459};

double calc_area_circle(double radius){
    return pi*radius*radius;
}
void area_circle(){
    double radius{};
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"Enter the radius of the circle : " ;
    cin>>radius;
    cout <<"The area of the circle with radius "<<radius<<" is " <<calc_area_circle(radius)<<endl;
}


double calc_area_sphere(double radius){
    return 4*pi*radius*radius;
}

void area_sphere(){
    double radius{};
    
    cout<<"Enter the Radius of the sphere :";
    cin>>radius;
    cout<<"The area of Sphere with Radius " << radius << " is " << calc_area_sphere(radius)<<endl;
}

double calc_volume_cylinder(double radius,double height){
    return pi*radius*radius*height;
}
void volume_cylinder(){
    double height{};
    double radius{};
    
    cout <<"\n\nEnter the Radius of the Cylinder : ";
    cin>> radius;
    cout<<"Enter the Heigth Of the Cylinder  : ";
    cin>>height;
    cout <<"The Volume Of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius,height)<<endl;
    cout <<"\n\n"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
}

int main() {
    area_circle();
    volume_cylinder();
    area_sphere();
    return 0;
}