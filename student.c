#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
  {
    char name[10];
    char PRN[10];
    int class[10];
    char address[10];
    char email[20];
    int grade;
  }s1,s2,s3;
void display(struct student s);
  int main()
     {
      struct student s;

      printf("enter name\n");

      scanf("%s%s%s",&s1.name,&s2.name,&s3.name);
      
      printf("enter PRN\n");
      scanf("%s%s%s",&s1.PRN,&s2.PRN,&s3.PRN);

      printf("enter class\n");
      scanf("%d%d%d",&s1.class,&s2.class,&s3.class);

      printf("enter grade\n");
      scanf("%d%d%d",&s1.grade,&s2.grade,&s3.grade);
     
display(s);
     }
void display(struct student s)
  {
   printf("ACADEMIC INFORMATION\n");
 
   printf("student name\t\tPRN\tclass\t\tgrade\n");
   
   printf("%s%s%s%d\t\n",s1.name,s1.PRN,s1.class,s1.grade);
   printf("%s%s%s%d\t\n",s2.name,s2.PRN,s2.class,s2.grade);
   printf("%s%s%s%d\t\n",s3.name,s3.PRN,s3.class,s3.grade);

  }
