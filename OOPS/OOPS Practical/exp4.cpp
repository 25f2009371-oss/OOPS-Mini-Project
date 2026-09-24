#include <iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main(){

 string s="Hello";   
//auto
cout<<"Auto based for loop"<<endl;
for(auto chr:s){
    cout<<chr<<endl;
}

cout<<"Range based for loop"<<endl;

vector <int> num={1,2,3,4};
for(int i: num){
    cout<<i<<" ";
}



}