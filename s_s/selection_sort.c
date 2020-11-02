#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


void sort(int arr[],int n)
{   
    int i,j,min;
    for (i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if (arr[j]<arr[min]){
            min=j;
            swap(&arr[min],&arr[i]);}
    }
    
}

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);

}
int main()
{
    int n,arr[10]={};
    printf("enter how many numbers do you want to sort : ");
    scanf("%d",&n);
    printf("enter the numbers : \n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("sorted array is :");
    sort(arr,n);
    print(arr,n);
    return 0;
  
}