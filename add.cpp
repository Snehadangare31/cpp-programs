#include<iostream>
using namespace std;
class student
{
  public:int num1,num2,sum;
  public:void getdata();
         void putdata();
};
void student::getdata()
{
 cout<<"enter the two number"<<endl;
 cin>>num1>>num2;
} 
void student::putdata()
{ 
 sum=num1+num2;
 cout<<"num1="<<num1<<endl<<"num2="<<num2<<endl<<"sum="<<sum;
}
int main()
{ 
 student s;
 s.getdata();
 s.putdata();
}
