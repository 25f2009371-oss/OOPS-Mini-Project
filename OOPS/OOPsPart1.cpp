#include <iostream>
using namespace std;

//making sumNum class
class sumNum{ 
    public: //making it public so anyone can access it
    int a,b;
    
    //public:
    
    public:
    void input(){ 
        
        cout<<"Enter first number: ";
        cin>>a;
                cout<<"Enter second number: ";

        cin>>b;



    }
    public:
    void output(){
        
        cout<<"Sum of two numbers: ";
        cout<<a+b;
    }


};


int main(){
    
    sumNum s1;
    
    
    s1.input();
    
    s1.output();

    

 
    
}