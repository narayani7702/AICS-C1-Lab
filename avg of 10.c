#include <stdio.h>
int main() {
    printf("enter 10 numbers\n");
    int i,Arr[10],sum=0;
    for(i=0;i<10;i++)
    {
        printf(" enter the %d number ",i+1);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<10;i++) {
        sum=sum+Arr[i];

    }
     int avg=sum/10;
        printf("the average of 10 numbers is %d",avg);
        return 0;

}
