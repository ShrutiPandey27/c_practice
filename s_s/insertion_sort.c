#include<stdio.h>
#include<math.h>

void sort(int arr[],int n)
{
    int temp,i,j;
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int n,arr[10]={};
    
   printf("enter how many number you want to sort\n");
   scanf("%d",&n);
   if(n>10)
   {
       printf("enter less than 10");
        
   }

   while (n<10){
       printf("enter the number one by one\n");
       for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
   

    sort(arr,n);
    print(arr,n);

    return 0;}
    

}