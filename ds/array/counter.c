#include<stdio.h>
void main(){
    int i,n,a[10],e,counter=0,index;

    printf("Enter your limit ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&e);
    printf("The element found at\n");

    for(i=0;i<n;i++){
    if(a[i]==e){
        counter=counter+1;
        index=i+1;
        printf("%d, ",index);
    }
    }

    if(counter>0){
        printf("\nThe number of occurence of %d is %d",e,counter);
    }

    else{
        printf("The element not found");
    }

}