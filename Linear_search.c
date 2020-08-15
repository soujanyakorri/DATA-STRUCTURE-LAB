#include<stdio.h>
int linear_search(int n,int a[50],int key_element)
{
    int i,pos=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==key_element)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
int main()
{
    int i,pos,n,key_element,a[50];
    printf("Enter the number of elements in tha array ");
    scanf("%d",&n);
    printf("Enter the numbers ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter The key element to be searched ");
    scanf("%d",&key_element);
    pos=linear_search(n,a,key_element);
    if(pos==-1)
    {
        printf("NOT FOUND");
    }
    else
    {

        printf("\n Element found at position %d",pos+1);
    }
}
