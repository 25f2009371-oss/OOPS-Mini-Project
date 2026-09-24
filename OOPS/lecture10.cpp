#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
int employee_id;
string employee_name;
string department;
string company_name;
int salary;
int net=0;


int algo(){

    if(salary>5000 &&  salary<=10000){
        net=salary+((salary*2.5)/100)+((salary*2)/100);
        return net;}

    else if(salary>10000 &&  salary<=25000){
        net=salary+((salary*3.5)/100)+salary+((salary*3)/100);}

    else if(salary>25000 &&  salary<=50000){net=salary+((salary*5)/100)+((salary*4.5)/100);}

    else if(salary>50001){net=salary+((salary*7.5)/100)+((salary*7)/100);uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu}
    return net;

}
void show(){
    algo();
    cout<<"Employee ID: "<<employee_id<<endl;
    cout<<"Employee Name: "<<employee_name<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Company: "<<company_name<<endl;
    cout<<"Net income: "<<net<<endl;
}
};



int main(){

    Employee emp1;
    emp1.employee_id=1;
    emp1.employee_name="Ayush";
    emp1.department="CSE";
    emp1.company_name="SS";
    emp1.salary=50000;

    emp1.show();


    return 0;

}