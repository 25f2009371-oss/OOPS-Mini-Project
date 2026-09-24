#include <iostream>
using namespace std;
class studentInfo{
private:
int roll_no;
string name;
int marks;
public:
void input_data( long long r, string n, int m){
this->roll_no=r;
this->name=n;
this->marks=m;
}
void output_marks(){
cout<<"Marks are: "<<marks<<"\n";
}
void output_rollno(){
cout<<"Roll no. is: "<<roll_no<<"\n";
}
void output_name(){
cout<<"Name: "<<name<<"\n";
}
void grade(){
if(marks>90){
cout<<"Grade: A"<<"\n";
}else if(marks>75){
cout<<"Grade: B"<<"\n";
}else if(marks>60){
cout<<"Grade: C"<<"\n";
}else if(marks>45){
cout<<"Grade: D"<<"\n";
}else if(marks<45) {
cout<<"Grade: Fail\n";}
}
};
int main(){
studentInfo s1;
s1.input_data(14, "Ayush karn", 98);
s1.output_name();
s1.output_marks();
s1.output_rollno();
s1.grade();
}
