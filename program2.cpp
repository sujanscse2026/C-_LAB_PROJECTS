#include<iostream>
using namespace  std;
class Shape{
    public:
        virtual float area()=0;  //Pure virtual function

};
class Circle:public Shape{
    
    private:
        float radius;
    public:
        Circle(float r):radius(r){}
        float area(){
            return 3.14*radius*radius;
        }
};
class Rectangle:public Shape{
    private:
        float length;
        float breadth;
    public:
        Rectangle(float l,float b):length(l),breadth(b){}
        float area(){
            return length*breadth;
        }
};
class Triangle:public Shape{
    private:
        float base;
        float height;
    public:
        Triangle(float b,float h):base(b),height(h){}
        float area(){
            return 0.5*base*height;
        }
};
int main(){
    Circle c(5.0);
    Rectangle r(4.0,6.0);
    Triangle t(10.0,8.0);

    cout<<"Area of Circle: "<<c.area()<<"\n";
    cout<<"Area of Rectangle: "<<r.area()<<"\n";
    cout<<"Area of Triangle: "<<t.area()<<"\n";

    return 0;
}