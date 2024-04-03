#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
char name[100];
char prn[100];
char clas[100];
float grade;
int mob[100];
char addr[100];
char email[100];
int sr_no[100];
}s1,s2,s3;
void display();
int main()
{
  cout<<"enter the name"<<endl;
  cin>>s1.name>>s2.name>>s3.name;
  cout<<"enter the prn"<<endl;
  cin>>s1.prn>>s2.prn>>s3.prn;
  cout<<"enter the clas"<<endl;
  cin>>s1.clas>>s2.clas>>s3.clas;
  cout<<"enter the grade"<<endl;
  cin>>s1.grade>>s2.grade>>s3.grade;

display();

}
void display()
{
  cout<<"ACCADEMIC INFORMATION"<<endl;
  cout<<"name"<<setw(5)<<"prn"<<setw(5)<<"class"<<setw(5)<<"grade"<<endl;
  cout<<s1.name<<setw(5)<<s1.prn<<setw(5)<<s1.clas<<setw(5)<<s1.grade<<endl;
  cout<<s2.name<<setw(5)<<s2.prn<<setw(5)<<s2.clas<<setw(5)<<s2.grade<<endl;
  cout<<s3.name<<setw(5)<<s3.prn<<setw(5)<<s3.clas<<setw(5)<<s3.grade<<endl;
}
