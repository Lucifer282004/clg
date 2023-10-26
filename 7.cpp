#include<iostream>
using namespace std;

class student{
    public:
    char name[15];
    int Rn;

    void getS(){
        cout<<"Enter the roll no :- "<<endl;
        cin>>Rn;

        cout<<"Enter the name of student :- "<<endl;
        cin>>name;
    }

    void displayS(){
        cout<<"The roll no is :- "<<Rn;

        cout<<"The name of student is :- "<<name;
    }
};

class Test{
    public:

    int Mark[5];

    void getT(){
        cout<<"Enter the marks of five subjects :- ";
        for(int i=0;i<5;i++){
            cin>>Mark[i];
        }
    }
    void displayT(){
        cout<<"The marks are :- "<<endl;
        for(int i=0;i<5;i++){
            cout<<Mark[i];
        }
    }
};

class Result:public Test,public student{
    public:
    int totalMark=0;
    float per;

    

    void displayR(){
        for(int i=0;i<5;i++){
            totalMark+=Mark[i];
        }
        per=(totalMark/200)*100;
        cout<<endl;
        cout<<"Percentage is :- "<<per<<endl;
        cout<<"Total Marks are :- "<<totalMark<<endl;
    }
};

int main(){
    Result r;

    r.getS();
    r.getT();

    r.displayS();
    r.displayT();
    r.displayR();
}