#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
#include<time.h>

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void generate_random(int a[],int n)
{
    int i;
    srand(time(0));
    for(i=0;i<n;i++)
        a[i] = rand()%1000;
}
int Partition(int a[10],int l,int h){
    int p = l;
    int i = l;
    int j = h;
    do{
        do{
            i = i+1;
        }while(a[i]<a[p]);
        do{
            j = j-1;
        }while(a[j]>a[p]);
        swap(&a[i],&a[j]);
    }while(i<=j);
    swap(&a[i],&a[j]);
    swap(&a[l],&a[j]);
    
    return j;
}

void Quicksort(int a[10],int l,int h){
    int p;
    if(l < h){
        p=Partition(a,l,h);
        Quicksort(a,l,p - 1);
        Quicksort(a,p + 1,h);
    }
}
int main()
{
    int a[1000000],i,ch,n;
    struct timeval t;
    double start,end;
    FILE *fp;
    printf("Enter the type of operation\n");
    printf("1-Randomly generate the numbers and quicksort\n");
    printf("2-Enter number of values to generate and sort\n");
    scanf("%d",&ch);
    switch(ch){
        case 1 :fp = fopen("quicksort.txt","w");
                for(i=10000;i<100000;i = i+5000)
                {
                    generate_random(a,i);
                    gettimeofday(&t,NULL);
                    start = t.tv_sec+(t.tv_usec/1000000.0);
                    Quicksort(a,0,i-1);
                    gettimeofday(&t,NULL);
                    end = t.tv_sec+(t.tv_usec/1000000.0);
                    printf("%d\t%1f\n",i,end-start);
                    fprintf(fp,"%d\t%1f\n",i,end-start);
                }
                fclose(fp);
                break;
        case 2 : printf("Enter the number of values to be generated\n");
                scanf("%d",&i);
                generate_random(a,i);
                gettimeofday(&t,NULL);
                Quicksort(a,0,i-1);
                gettimeofday(&t,NULL);
                end = t.tv_sec+(t.tv_usec/1000000.0);
                printf("%d\t%1f\n",i,end-start);
                printf("Sorted numbers are\n");
                printf("The Sorted array is \n");
                for(n=0;n<i;n++)
                    printf("%d\t",a[n]);
                break;
        default: printf("Invalid Choice");
    }
    return 0;
}
