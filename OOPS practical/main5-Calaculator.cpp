#include<iostream>
using namespace std;
class calculator{
    public:
    class add{
        public:
        int sum(int a,int b){
            return a+b;
        }
        int sum(int a,int b,int c){
            return a+b+c;
        }
        double sum(double a,double b){
            return a+b;
        }
    };
};
int main(){
    calculator::add obj;
    cout<<obj.sum(10,20)<<endl;
    cout<<obj.sum(10,20,30)<<endl;
    cout<<obj.sum(10.5,20.5)<<endl;
}