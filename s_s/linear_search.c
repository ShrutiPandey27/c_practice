#include<stdio.h>

int n,s;
int a[10]={};
int main()
{
    printf("enter how many numbers you want to store:");
    scanf("%d",&n);
    printf("enter the digits one by one:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("which digit do you want to search");
    scanf("%d",&s);
    for(int i =0;i<n;i++)
    {
        if (a[i]==s){
            printf("number found at %d position .",i+1);
            
        }
        if(i>n)
        {
            printf("not found");
        }
        
        
    }
    
    
}