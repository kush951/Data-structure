#include <stdio.h>

int main()
{
    int arr[10],n;
    printf("Enter the size  of Array:");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter the elements %d of Array:",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements of array: ");
    for (int i = 0; i < n; i++) {
        
        printf("%d\t",arr[i]);
    }

    return 0;
}
