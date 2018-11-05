//Find the elements of a array where i=j

#include<stdio.h>

main(){

int s[50][50];

int i,j,r,c;
printf("Enter row \n");
scanf("%d", &r);
printf("Enter column \n");
scanf("%d", &c);

printf("Enter your array Elements\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
          scanf("%d", &s[i][j]);
    }
}
printf("the diagonal elements: \n");
for(i=0;i<r;i++)
    {
          printf("%d ", s[i][i]);
    }
}

