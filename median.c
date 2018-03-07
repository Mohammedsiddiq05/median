#include<stdio.h>
int main()
{
int n,i,a[100]c;
printf("\enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
printf("\nenter the value:");
scanf("%d",&a[i]);
printf("%d",a[i]);
}
c=(a[1]+a[2]+a[3])/2;
printf("%d",c);
return 0;
}
