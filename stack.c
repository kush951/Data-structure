
#include <stdio.h>

int main()
{
    int top = -1,n,x,stack[10];
    printf("Enter the size of stack:");
    scanf("%d",&n);
    
    if(top == n- 1){
           printf("Stack Overflow!!");
       }
       else{
              for(int i =0;i < n;i++){
              //Inputing the Stack
              printf("Enter the elements of stack: ");
               scanf("%d",&x);
               top+=1;
              stack[top] =x;
              }
      
    }
    printf("Elements of stack are : ");
    for(int i =top;i > -1;--i){
        //Display the for loop 
        printf("%d ",stack[i]);
    }
    
    return 0;
}