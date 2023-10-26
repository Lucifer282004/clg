#include<iostream>
using namespace std;

// class A{
//     public:

//     void a(){
//         cout<<"Hello A class ";
//     }
// };

// class B:public A{
//     public:


// };
// int main(){
//     B b;

//     b.a();
// }

#include<iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
};

class B : virtual public A {
public:
    void display() {
        cout << "Derived 1" << endl;
    }
};

class C : virtual public A {
public:
    void display() {
        cout << "Derived 2" << endl;
    }
};

class D : virtual public B, virtual public C {
public:
    void display() {
        cout << "Derived 3" << endl;
    }
};

int main() {
    D d;
    d.A::display();   
    d.B::display();    // Calls the display function of class B
    d.C::display();    // Calls the display function of class C
    d.display();       

    return 0;
}
