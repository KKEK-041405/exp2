#include<stdio.h>
void main()
{
int a[10],n,i,j,temp=0;
printf("Enter number of elements in the array: ");
scanf("%d",&n);
printf("Enter the elements of array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
j=i;
while(j>0 && a[j-1]>a[j])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
}
printf("Sorted array in ascending order:");
for(i=0;i<n;i++)
{
if(i<n-1)
printf("%d ",a[i]);
else
printf("%d \n",a[i]);
}
}