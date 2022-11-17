//print elemnts in reverse order
#include<stdio.h>
int main() 
{

int a[5],i;

for (i=0;i<5;i++)
{

printf("enter a[%d]: \n",i);

scanf("%d",&a[i]);
a[i]=a[i]+5;


}
printf("Your new number with addtion of 5 will be : \n");
for (i=4;i>=0;i--)
{
    
printf("\na [%d]=%d\n",i,a[i]);
}

return 0;

}