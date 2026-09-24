#include<stdio.h>
void main(){
    int i,f=0,n,a[10],e,index;

    printf("Enter your limit ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&e);

    for(i=0;i<n;i++){
    if(a[i]==e){
        f=1;
        index=i;
    }
    }

    if(f==1){
        printf("The element found at index %d",index);
    }

    else{
        printf("The element not found");
    }

}