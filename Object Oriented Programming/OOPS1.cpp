#include <iostream>

using namespace std;


class student{
    private: 

    public: 
    char *name;
    int grade;
    int marks;
    static int rollno;
    static char division;

    student(){
        cout<<"Object has been created successfully "<<endl;
        name = new char[10];
    }

   
    student(student& temp){
        cout<<"copy constructor has been provoked "<<endl;
        this->grade = temp.grade;
        this->rollno = temp.rollno;

        char *ch = new char[10];
        strcpy(ch,temp.name);
        this->name = ch;

    }

    void gradeSet(int n){
        this->grade = n;
    }

    void marksSet(int n){
        this->marks = n;
    }

    void nameSetter(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"Name of the student is "<<this->name<<endl;
        cout<<"The Grade of the student is "<<this->grade<<endl;
        cout<<"The Marks of the student is "<<this->marks<<endl;
    }

};

 

int student::rollno = 5;
char student::division = 'C';


int main(){
    cout<<endl;
    cout<<endl;


    student s;
    char h[10] = "Vijesh";


    s.nameSetter(h);
    s.gradeSet(90);
    s.marksSet(12);
    s.print();
    
    student *p = new student();

    p->gradeSet(100);

    p->print();

    student k(s);

    cout<<"Before "<<endl;
    k.print();

    s.name[0] = 'K';
  
    cout<<"After "<<endl;
    k.print();








    cout<<endl;
    cout<<endl;
}