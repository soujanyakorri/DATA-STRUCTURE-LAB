#include<stdio.h>
int linear_search(int a[10],int n,int key_element)
{
    static int i=0;
    if(a[i]==key_element)
    {
        return i;
    }
    else if(i<n)
    {
        i++;
        linear_search(a,n,key_element);
    }

    else
    {
        return -1;
    }
}
int main()
{
    int n,key_element,pos,i,a[50];
    printf("Enter the number of elements in the array ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number has to be searched ");
    scanf("%d",&key_element);
    pos=linear_search(a,n,key_element);
    if(pos==-1)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("The element is found at %d",pos+1);
    }
}
