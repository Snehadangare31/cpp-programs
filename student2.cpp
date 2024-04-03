#include<iostream>
#include<iomanip>
using namespace std;
class student
{
public:
    char name[50];
    char PRN[10];
    char div[10];
    int grade;
public:void getdata();
public:void putdata();
};
void student::getdata()
{
for(int i=0;i<3;i++)
    { cout<<"name"<<endl;
      cin>>name;
      
      cout<<"PRN"<<endl;
      cin>>PRN;

      cout<<"div"<<endl;
      cin>>div;

      cout<<"grade"<<endl;
      cin>>grade;
    }
}
void student::putdata()
   {
    cout<<"ACADEMIC INFORMATION"<<endl;
    cout<<name<<setw(17)<<PRN<<setw(17)<<div<<setw(17)<<grade;
        cout<<name<<setw(17);
  
        cout<<PRN<<setw(17); 

        cout<<div<<setw(17);
 
        cout<<grade<<setw(17);
   }
int main()
{
student s;
s.getdata(); 
}

