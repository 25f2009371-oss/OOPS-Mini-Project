#include <iostream>
#include <string>
using namespace std;

//making sumNum class
class sdata{ 
    public: //making it public so anyone can access it
    int a,b;
    
    //public:
    
    public:
    void input(){ 
        
        cout<<"Enter roll no: ";
        cin>>a;
                cout<<"Enter total marks out of 1200: ";

        cin>>b;
    }
    public:
    void access(){
        
        cout<<"Data: "<<endl;
        cout<<"Roll no: "<<a<<endl;
        
        cout<<"Marks: "<<b<<endl;
    }


};


int main(){
    sdata ayush;
    
    ayush.input();
    
    ayush.access();

 
    
}