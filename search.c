//program to search an element in an array
#include<stdio.h>
int linear_search(int arr[],int n,int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int main()
{
    int n,x;
    printf("enter the number of elements of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&x);
    int result = linear_search(arr,n,x);
    if(result==-1)
    printf("element is not present in an array");
    else
    printf("element is present at index %d\n",result);
    return 0;

}