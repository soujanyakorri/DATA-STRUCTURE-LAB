#include<stdio.h>
int binary_search(int beg,int end,int a[50],int key_element)
{
    int mid,pos=-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==key_element)
        {
            pos=mid;
            break;
        }
        if(a[mid]<key_element)
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return pos;
}
int main()
{
    int i,n,pos,key_element,a[50];
    printf("Enter number of elements in the array\n ");
    scanf("%d",&n);
    printf("Enter the elements\n ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key element to search\n ");
    scanf("%d",&key_element);

    pos=binary_search(0,n-1,a,key_element);
    if(pos==-1)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("The element found at position: %d\n",pos+1);
    }
}

