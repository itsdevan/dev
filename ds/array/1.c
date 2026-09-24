#include<stdio.h>

void main(){

int a[10],i;

printf("Enter the elements one by one ");

for(i=0;i<3;i++){
    scanf("%d",&a[i]);
}

printf("Your Elements are ");  

for(i=0;i<3;i++){
    printf("%d",a[i]);
}

}

