#include <iostream>

using namespace std;

class Human {
    private: 
        int rollno;
    public:
        int age;
        char gender;
        bool isGrad;

    void getRoll(){
        cout<<"Human ka";
    }

    void RollSetter(int n){
        this->rollno = n;
    }

};

class Male:public Human{
    public:
        int attack(){
            cout<<"Humans do attack "<<endl;
            return 0;
        }

       

      
};  

int main(){
    Male m;

    m.RollSetter(20);

    m.getRoll();

}
