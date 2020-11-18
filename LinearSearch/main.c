#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[20],key;
    //i is used for loop and n is used to find number of elements in the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter element number %d:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    for(i=1;i<=n;i++)
    {
        if(key==a[i])
        break;

    }
    if(i<=n)
        printf("Key fount at position:%d",i);
    else
        printf("Element is not in the array");
    return 0;
}
