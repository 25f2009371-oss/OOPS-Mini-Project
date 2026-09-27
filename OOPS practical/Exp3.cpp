#include <iostream>
using namespace std;
inline int sum(int num){
return num+num;
}
void interest(float amount, float rate = 10.5){
float si;
si=(amount*rate)/100;
cout<<"Simple Interest: "<<si<<endl;
}
class demo{
public:
int x;
int y;
public:
void display(int a){
cout<<"Display function with one number: "<<a<<endl;
}
void display(int a, int b){
cout<<"Display the function with two numbers: "<<a<<" "<<b<<endl;
}
void display(int a, float b){
cout<<"Display the function with two numbers: "<<a<<" "<<b<<endl;
}
void display(double a){
cout<<"Display the function with two numbers: "<<a<<endl;
}
};
int main(){
demo object;

object.display(8);
object.display(9,3);
object.display(5.4);
object.display(9,8.3f);
int n=5;
cout<<"Inline Function sum: "<<sum(n)<<endl;
interest(5,5.1f);

return 0;
}

