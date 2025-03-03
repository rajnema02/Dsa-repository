#include<iostream>
#include<cmath>
using namespace std;

class Circle{
    private:
    double radius;

    public:
    Circle (double r){
        radius = r;
    }

    double calculateArea(){
        return M_PI * pow(radius,2);
    }
};

int main(){
    double radius;

    cout<<"Enter the radius: "<<endl;
    cin>>radius;

    Circle myCircle(radius);

    double area = myCircle.calculateArea();

    cout<<"The area of the circle radius "<< radius<<"is: "<<area<<endl;
}