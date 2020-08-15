#include<stdio.h>
int binary_search(int beg,int end,int a[50],int key_element)
{
    int mid;
    if(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==key_element)
        {
            return mid;
        }
        else if(a[mid]<key_element)
        {
             binary_search(mid+1,end,a,key_element);
        }
        else
        {
             binary_search(beg,mid-1,a,key_element);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int i,n,key_element,pos,a[50];
    printf("Enter the number of elements in the array ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key element to search ");
    scanf("%d",&key_element);
    pos=binary_search(0,n-1,a,key_element);
    if(pos==-1)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("Element found at position %d",pos+1);

    }
}
