#include<stdio.h>
int main()
{
int a[50],n=10,i,j,c;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
c=a[i];
a[j]=a[i];
a[i]=c;
}
}
}
printf("%d",a[3]);
return 0;
}
