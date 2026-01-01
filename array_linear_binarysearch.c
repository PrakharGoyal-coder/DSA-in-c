#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int size,int element)
{
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]>element)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;

}
int main()
{
    int arr[]={1,3,5,56,64,73,1234,225,444};
    int size=sizeof(arr)/sizeof(int);
    int element=12341;
    int searchIndex=linearsearch(arr,size,element);
    printf("linear search:\n");
    printf("Element %d was found at index %d\n",element,searchIndex);
    printf("Binary search\n");
   searchIndex=binarysearch(arr,size,element);
    printf("Element %d was found at index %d\n",element,searchIndex);
    return 0;

}