#include <iostream>
using namespace std;

void swap(int &a, int &b){
    
    int temp=a;
    a=b;
    b=temp;
}

void swapbyvalue(int a, int b){
    
    int temp=a;
    a=b;
    b=temp;

    cout<<a<<" "<<b<<endl;
}

int main(){
    
    
    int a=5;
    int b=10;
    
    cout<<"Swap through call by value: "<<endl;
    swapbyvalue(a,b);

    cout<<"Original value remain same"<<endl;
    cout<<a<<" "<<b;
    cout<<endl;
        swap(a,b);

    cout<<"Swap through call by reference orginal value changes: "<<endl;
    cout<<a<<" "<<b;
    
}