//Multiplication of a array
//Solution
#include<stdio.h>
main()
{
    int s[50];            //declare array
    int i,n;
    int mul=0;
    printf("enter number of element:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)                           //for loop to insert array
    {
        scanf("%d",&s[i]);
    }
    printf("your array:\n");
    for(i=0;i<n;i++)             //for loop to print array
    {
        printf("%d \t\n",s[i]);
    }
    for(i=0;i<n;i++)        //for loop to sum array
    {
     mul=mul*s[i];
    }
    printf("sum of array:%d\n",mul);
}

