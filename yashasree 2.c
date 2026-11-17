#include<stdio.h>
void main()
{
int marks;
printf("enter student marks 0 to 100:");
scanf("%d",&marks);
if(marks<0||marks>100)
printf("invalid marks!please enter a value between o to 100.\n");
else if(marks>=90)
printf("grade:a/n");
else if(marks>=75)
printf("grade:b/n");
else if(marks>=60)
printf("grade:c/n");
else if(marks>=50)
printf("grade:d/n");
else
printf("grade:f/n");
}
