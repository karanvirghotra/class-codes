#include<stdio.h>
int main() 
{

int a[5],i;

for (i=0;i<5;i++)
{

printf("enter a[%d]: \n",1);

scanf("%d",&a[i]);
a[i]=a[i]+5;


}
printf("Your new number with addtion of 5 will be : \n");
for (i=0;i<5;i++)
{
printf("\na [%d]=%d\n",1,a[i]);
}

return 0;

}