
#include <iostream>
using namespace std;
class Shape {
    public:
        virtual float getArea() = 0;
        virtual float getPerimeter() = 0;
};
class Rectangle:public Shape {
    private:
        float length;
        float width;
    public:
        Rectangle(float length, float width) {
            this->length = length;
            this->width = width; 
        }
        float getArea(){
            return length*width;
        }
        float getPerimeter(){
            return (length+width)*2;
        }
};
class Circle:public Shape {
    private:
        float radius;
    public:
        Circle(float radius){
            this->radius = radius;
        }
        float getArea(){
            return radius*radius*3.14;
        }
        float getPerimeter(){
            return 2*3.14*radius;
        }
};
int main(){
    Shape* shapes[4];
    shapes[0] = new Rectangle(3.4, 5.3);
    shapes[1] = new Circle(5.5);
    shapes[2] = new Rectangle(7.4, 4.3);
    for (int i = 0; i < 3; i++) {
        cout << "Area of shapes[" << i << "]: " << shapes[i]->getArea() << endl;
        cout << "Perimeter of shapes[" << i << "]: " << shapes[i]->getPerimeter() << endl;
    }
    return 0;
}
