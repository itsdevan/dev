#include <stdio.h>
void main(){

    int i, a[5];
    printf("Enter the 3 elements\n");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }

    printf("Your Elements in Reverse Order:\n ");

    for(i=2;i>=0;i--){
        printf("%d",a[i]);
    }

}