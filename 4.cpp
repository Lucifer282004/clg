#include<iostream>
using namespace std;

class Circle{
    public:
    float radius;

    virtual void get(){
        cout<<"Enter the radius :- ";
        cin>>radius;

    }

    virtual void display(){
        cout<<"The Area of circle is - "<< radius* radius<<endl;
    }
};

class Cylender:public Circle{
    public:
    float height;

    void get(){
        cout<<"Enter the radius :- ";
        cin>>radius;

        cout<<"Enter the height :- ";
        cin>>height;
    }

    void display(){
        cout<<"Area of cylender is - "<<3.14 * radius * radius * height;
    }
};

int main(){
    Circle C;
    Cylender c;

    C.get();
    C.display();

    c.get();
    c.display();
}