#include <iostream>
#include <cmath>
using namespace std;

void square(int &a){
    a=pow(a,2);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    square(n);
    
    cout<<n;
}