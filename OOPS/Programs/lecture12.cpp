#include <iostream>
using namespace std;


void interest(float amount, float rate=8.5){
int si=(amount*rate)/100;

cout<<si<<endl;

}

int main(){

    interest(10000);
    interest(10000,10);
}