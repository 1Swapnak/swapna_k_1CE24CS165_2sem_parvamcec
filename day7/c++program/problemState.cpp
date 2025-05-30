#include<iostream>
using namespace std;
class Shape{
  public:
  void calculateArea(){
    cout<<"area is not defined for generic shape. "<<endl;
  }
};
class Circle{
    private:
    float rad;
    public:
    Circle(float r):{
        this->rad=r;
    }
    void calculateArea(){
        cout<<"Area of the Circle is :"<<3.142*rad*rad<<endl;
    }

    };
    class Rectangle{
        private:
        float length;
        float width;
        public:
        Rectangle(float length,float width){
            this->length=length;
            this->width=width;
        }
        void calculateArea(){
            cout<<"Area of the Rectangleis:"<<length*width<<endl;
        }
    };
    class Triangle{
        private:
        float base;
        float height;
        public:
        Triangle(float b,float h){
            this->base=b;
            this->height=h;
        }
        void calculateArea(){
            cout<<"Area of the Triangle is:"<<0.5*base*height<<endl;
        }

    };
    int main(){
        Shape s1;
        s1.calculateArea();
        Circle c1(2.0);
        c1.calculateArea();
        Rectangle r1(3.0,2.0);
        r1.calculateArea();
        Triangle t1(4.0,2.0);
        t1.calculateArea();
         return 0;
}



