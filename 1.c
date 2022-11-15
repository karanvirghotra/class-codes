// prime number from a range n to y pt.
#include <stdio.h>

int main()
{
    int number,sum,r,x,n,n1,m;
    
    printf("Enter the starting range");
    scanf("%d",&n);
    
    printf("Enter the ending point");
    scanf("%d",&x);

    for(int i=n;i<=x;i++)
    {
        int flag=0;
        
        for(int j=2;j<i;j++)

        {
            if(i%j==0)
            {
                
                flag++;
                break;
                
            }
            
            


        }
        // printf("Enter the value of flag");
        // printf("%d \n",flag);
        if(flag==0)
        {
            printf("%d \n",i);
        }

    }
}