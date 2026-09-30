#include <iostream>
using namespace std;
class Distance{
float meters;

public:
Distance(float m):meters(m) {};
void show(){
    cout<<meters<<"m";}};


void printDistance(Distance d){
    d.show();}

int main(){
Distance d1=5.0f;
Distance d2(12.5);
printDistance(7.2f);
}