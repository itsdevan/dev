#include <stdio.h>
void main(){

    int i, a[100],small,n,large,sum=0;
    printf("Enter your limit ");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

        small=a[0];
        large=a[0];

    
    for(i=1;i<n;i++){


        if(a[i]<small){
            small=a[i];
        }

        if(a[i]>large){
            large=a[i];
        }
    }

    printf("sum of the elements are %d\n ",sum);
    printf("largest element is : %d\n ",large);
    printf("smallest element is : %d\n ",small);


    }

