#include <iostream>
#include <vector>
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
class PolyLine {
    private: 
        vector<Point> points;
    public:
        PolyLine(){

        }
        PolyLine(vector<Point> points){
            this->points = points;
        }
        void appendPoint(Point point){
            points.push_back(point);
        }
        void appendPoint(int x, int y){
            points.push_back(Point(x,y));
        }
        float leng(Point x, Point y){
            return sqrt(pow(x.getX() - y.getX(),2) + pow(x.getY() - y.getY(),2));
        }
        float getLength(){
            float result = 0;
            for(int i = 0; i < points.size() - 1; i++){
                result += leng(points[i], points[i+1]);
            }
            return result;
        }

};
int main(){
    PolyLine a;
    a.appendPoint(Point(1,1));
    a.appendPoint(Point(2,3));
    a.appendPoint(3,0);
    a.appendPoint(4,2);
    cout<<a.getLength();
}