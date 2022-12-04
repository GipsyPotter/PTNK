#include <iostream>
using namespace std;

struct Point{
    int x,y;
    Point(){this->x=0;this->y=0;}
    friend istream& operator>> (istream& in, Point& t){
        in >> t.x >> t.y;
        return in;
    }
    friend bool operator<(Point a, Point b){
        return (a.x<b.x)&&(a.y<b.y);
    }
    int area(Point b){
        int 
    }
};
int main(){
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    int x3,y3;
    cin>>x3>>y3;
    Point a,b,c;
    cin>>a>>b>>c;

}