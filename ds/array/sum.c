#include <stdio.h>
void main(){

    int i, a[3],sum=0;
    printf("Enter the 3 elements\n");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    printf("Sum of the elements are:\n ");

        printf("%d",sum);
    }

