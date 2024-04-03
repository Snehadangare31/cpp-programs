#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct employee
{
 char name[100],id[100],des[100],mob[100];
    float bs,da,hra,ts;
}e1,e2,e3;
void display(struct employee e);
int main()
{
    struct employee e;
    cout<<"Enter name of employee :"<<endl;
    cin>>e1.name>>e2.name>>e3.name;
    cout<<"Enter employee id:"<<endl;
    cin>>e1.id>>e2.id>>e3.id;
    cout<<"enter employee mobile number:"<<endl;
    cin>>e1.mob>>e2.mob>>e3.mob;
    cout<<"enter employee designation:"<<endl;
    cin>>e1.des>>e2.des>>e3.des;
    cout<<"enter basic salary"<<endl;
    cin>>e1.bs>>e2.bs>>e3.bs;
    e1.da=(80*e1.bs)/100;
    e2.da=(80*e2.bs)/100;
    e3.da=(80*e3.bs)/100;
    e1.hra=(20*e1.bs)/100;
    e2.hra=(20*e2.bs)/100;
    e3.hra=(20*e3.bs)/100;
    e1.ts=e1.bs+e1.da+e1.hra;
    e2.ts=e2.bs+e2.da+e2.hra;
    e3.ts=e3.bs+e3.da+e3.hra;
    display(e);
}
void display(struct employee e)
 {
  cout<<"employee details:"<<endl;
  cout<<e1.name<<setw(5)<<e1.id<<setw(5)<<e1.mob<<setw(5)<<e1.des<<setw(5)<<e1.bs<<endl;
  cout<<e2.name<<setw(5)<<e2.id<<setw(5)<<e2.mob<<setw(5)<<e2.des<<setw(5)<<e2.bs<<endl;
  cout<<e3.name<<setw(5)<<e3.id<<setw(5)<<e3.mob<<setw(5)<<e3.des<<setw(5)<<e3.bs<<endl;
  cout<<endl;
}
 
