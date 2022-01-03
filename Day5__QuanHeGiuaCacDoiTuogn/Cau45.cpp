#include <iostream>
#include <cmath>
using namespace std;
class Point {
    private:
        int x;
        int y;
    public:
        Point(){

        }
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            this->y = y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
};

class Tringle {
    private:
        Point vertice1;
        Point vertice2;
        Point vertice3;
    public:
        Tringle(Point vertice1, Point vertice2, Point vertice3){
            this->vertice1 = vertice1;
            this->vertice2 = vertice2;
            this->vertice3 = vertice3;
        }
        Tringle(int x1, int y1, int x2, int y2, int x3, int y3){
            this->vertice1 = Point(x1,y1);
            this->vertice2 = Point(x2,y2);
            this->vertice3 = Point(x3,y3);
        }
        float length(Point x, Point y){
            return sqrt(pow(x.getX() - y.getX(),2) + pow(x.getY() - y.getY(),2));
        }
        float getPerimeter(){
            return length(vertice1,vertice2) + length(vertice2,vertice3) + length(vertice3,vertice1);
        }
};
int main(){
    Point x(1,3);
    Point y(2,3);
    Point z(4,2);
    Tringle *ABC = new Tringle(x,y,z);
    cout<<"Chu vi tam giac ABC = "<<ABC->getPerimeter()<<endl;
    Tringle *MNP = new Tringle(4,5,2,6,3,7);
    cout<<"Chu vi tam giac MNP = "<<MNP->getPerimeter()<<endl;

    delete ABC;
    delete MNP;
    return 0;
}