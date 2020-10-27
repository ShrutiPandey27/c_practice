#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array element:  \n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    for(i=1;i<n;++i)
        for(j=0;j<(n-i);++j)
        if(a[j]>a[j+1])
        {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }
        printf("\n array after sorting :\n ");
        for(i=0;i<n;++i)
        printf(" %d \t",a[i]);

        return 0;
}