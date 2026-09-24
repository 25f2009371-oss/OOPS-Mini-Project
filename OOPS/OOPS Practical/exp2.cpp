#include <iostream>
#include<cmath>
using namespace std;

//inline function
inline int in(int a,int b){
    return a+b;
}

//default arguments
int dflt(int ex=2){
    return pow(ex,2);
}

//function overloarding
int a,b,c,ans;
int multiply(int a, int b){
    int ans=a*b;
    return ans;
}

int multiply(int a, int b, int c){
    int ans=a*b*c;
    return ans;
}





int main(){
    //inline
    cout<<"Inline function: "<<in(5,6)<<endl;
    //function overloading
    cout<<"Function overloading: "<<multiply(5,6)<<endl;
    cout<<"Function overloading: "<<multiply(5,6,7)<<endl;
    cout<<"Default args: "<<dflt()<<endl;
}