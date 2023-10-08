#include<stdio.h>
int BinarySearch(int a[],int key,int low, int high);
int main()
{
    int n,i,a[20],key,pos;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements to be searched");
    scanf("%d",&key);
    pos = BinarySearch(a,key,0,n-1);
    if(pos==-1)
    printf("Item/Key not found");
    else {
    printf("Item/Key found at %d location",pos+1);
    }
    return 0;
}
int BinarySearch(int a[],int key,int low, int high)
{
    int mid;
    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(key==a[mid])
        return mid;
    if(key<a[mid])
        return(BinarySearch(a,key,low,mid-1));
    else
        return(BinarySearch(a,key,mid+1,high));
}