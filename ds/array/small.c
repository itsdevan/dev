#include <stdio.h>
void main(){

    int i, a[3],small;
    printf("Enter the 3 elements\n");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }

        small=a[0];

    
    for(i=1;i<3;i++){


        if(a[i]<small){
            small=a[i];
        }
    }

    printf("smallest element is :\n ");

        printf("%d",small);
    }

