#include<stdio.h>
#include<stdlib.h>

int a[20];
int n,val,i,pos,choice;

void create();
void display();
void insert();
void delete();

int main()
{
    while(1)
    {
        printf("\n-------menu------\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.insert\n");
        printf("4.delete\n");
        printf("5.exit\n");
        printf("------");
        printf("\nenter your choice\t");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:create();
            break;
            case 2: display();
            break;
            case 3: insert();
            break;
            case 4: if (n==0)
            {
                printf("array is empty\n");
            }
            else
            {
                delete();
            break;
            }
            case 5:exit(0);
            default: printf("\n invalid choice");
            
        }
    }
    return 0;
}

void create()
{
    printf("\n enter the size of the array elements:\n");
    scanf("%d",&n);
    printf("enter the element for the array\n");
    for (i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
}

void display()
{
    int i; 
    printf("\n the array elements are:");
    for (i=1 ;i<=n;i++)
    {
        printf ("%d\t",a[i]);
    }

}

void insert()
{
    printf("\nenter the position for the new element:");
    scanf("%d",&pos);
    if(pos>(n+1))
    printf("\n invalid position\n");
    else
    {
        printf("\n enter the element to be inserted:");
        scanf("%d",&val);
        for(i-n;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=val;
        n=n+1;
    }
    
}

void delete()
{
    printf("\nenter the position of the element to be deleted:");
    scanf("%d",&pos);
    if(pos>n)
    printf("\ninvalid position");
    else
    {
        val=a[pos];
        for(i=pos;i<n ;i++)
        {
            a[i]=a[i+1];
        }

        n=n-1;
        printf("\n the deleted element is = %d",val);
    }
    
}






