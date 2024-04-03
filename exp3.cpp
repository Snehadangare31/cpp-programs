#include<iostream>
using namespace std;
class date
{
 private :
          int day,month,year;
 public:
 	 date()
   {
	 day=0;
	 month=0;
	 year=0;
   }
	 
    void setdate(int d,int m,int y)
   {
	  day=d;
	  month=m;
	  year=y;
   }
 
 void display()
{
	 cout<<day<<"/"<<month<<"/"<<year<<endl;
          if(month==1)
	 cout<<day<<"/"<<"Jan"<<"/"<<year<<endl;
	 else if(month==2)
	 cout<<day<<"/"<<"Feb"<<"/"<<year<<endl;
	 else if(month==3)
	 cout<<day<<"/"<<"Mar"<<"/"<<year<<endl;
	 else if(month==4)
	 cout<<day<<"/"<<"Apr"<<"/"<<year<<endl;
	 else if(month==5)
	 cout<<day<<"/"<<"May"<<"/"<<year<<endl;
	 else if(month==6)
	 cout<<day<<"/"<<"Jun"<<"/"<<year<<endl;
	 else if(month==7)
	 cout<<day<<"/"<<"Jul"<<"/"<<year<<endl;
	 else if(month==8)
	 cout<<day<<"/"<<"Aug"<<"/"<<year<<endl;
	 else if(month==9)
	 cout<<day<<"/"<<"Sep"<<"/"<<year<<endl;
	 else if(month==10)
	 cout<<day<<"/"<<"Oct"<<"/"<<year<<endl;
	 else if(month==11)
	 cout<<day<<"/"<<"Nov"<<"/"<<year<<endl;
	 else if(month==12)
	 cout<<day<<"/"<<"Dec"<<"/"<<year<<endl;

         year=year%100;
         cout<<day<<"/"<<month<<"/"<<year<<endl;
      

}

 int getday()
{
 return day;
}

 int getmonth()
{
 return month;
}

};

int main()
{
  date obj;
 int d1,m1,y1;
 cout<<"\nEnter day   :  ";
 cin>>d1;
 cout<<"\nEnter month :  ";
 cin>>m1;
 cout<<"\nEnter year  :  ";
 cin>>y1;

obj.setdate(d1,m1,y1);
obj.display();
}
