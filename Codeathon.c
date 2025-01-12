#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,j,n;
    
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    
    printf("Enter the Array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("After his step : %d\n",i+1);
            for(int k = 0;k<n;k++)
                printf("%d ",a[k]);
                printf("\n");
    }
    printf("Finally ,he got it...\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
