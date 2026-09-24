#include <stdio.h>
void main(){

    int i, a[3],large;
    printf("Enter the 3 elements\n");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }

        large=a[0];

    
    for(i=1;i<3;i++){


        if(a[i]>large){
            large=a[i];
        }
    }

    printf("Largest element is :\n ");

        printf("%d",large);
    }

