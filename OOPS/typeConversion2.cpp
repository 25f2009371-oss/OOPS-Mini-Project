#include <iostream>
using namespace std;
class Distance{
float meters;

public:
Distance(float m):meters(m) {};

operator float() const{
    return meters;
}
};



int main(){
Distance d(5.0f);
float f=d;
cout<<(f+2.5f); 
}