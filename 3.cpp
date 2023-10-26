#include<iostream>
using namespace std;

class Student{
    public:
    char name[25];

    virtual void get(){
        cout<<"Enter the name :- ";
        cin>>name;
    }

    virtual void display(){
        cout<<"Name of student is :- "<<name;
    }
};

class Test:virtual public Student{
    public:

    int Marks ;

    void get(){
        cout<<"Enter the Marks :- ";
        cin>>Marks;
    }

    void display(){
        cout<<"Marks are :- "<<Marks<<endl;
    }
};

class Sports:virtual public Student{
    public:

    int score;
    void get(){
        cout<<"Enter the Sports Score :- ";
        cin>>score;
    }

    void display(){
        cout<<"Score is :- "<<score<<endl;
    }
};

class Result:virtual public Sports,virtual public Test{
    public:

    void get(){
        cout<<"Enter the data "<<endl;
        Student::get();
        Sports::get();
        Test::get();
    }
    void display(){
        cout<<"The data is :- "<<endl;
        Student::display();
        Sports::display();
        Test::display();
    }
};

int main(){
    Result r;
    r.get();
    r.display();  
}