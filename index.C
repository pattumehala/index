#include<stdio.h>
int main()
{
int a[20],i,num;
printf("Enter the size of an array:\n");
scanf("%d",&num);
printf("Enter the elements in an array:\n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("%d %d\n",i,a[i]);
}
return 0;
}

