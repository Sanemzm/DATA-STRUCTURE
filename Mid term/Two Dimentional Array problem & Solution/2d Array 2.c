//sum of matrix

#include<stdio.h>

main(){

int s[50][50];
int sum=0;
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
for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
          sum=sum+s[i][j];
    }
}
    printf("sum of matrix: %d\n",sum);

}
