#include <iostream>
using namespace std;

//making sumNum class
class sumNum{ 
    public: //making it public so anyone can access it
    int a,b;
    
    //public:
    
    private:
    void addNum(){ 
        
        cout << a << "+" << b<<"=" <<a+b ;
        
    }
};


int main(){
    
    sumNum s1;
    
    
    s1.a=65; //assigning values to variable insider class
    s1.b=35;

    s1.addNum(); //calling function inside the class

 
    
}