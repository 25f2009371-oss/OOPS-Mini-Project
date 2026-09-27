#include <iostream>
using namespace std;

int main(){
    int numbers[] = {10,20,30,40,50};
    for(auto value : numbers){
        cout<<value<<" ";
    }

    auto a= 4;
    auto b= 4.5;
    auto c= "Name";
    auto d= 'n';
    auto e= true;
    cout<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"e: "<<e<<endl;
}