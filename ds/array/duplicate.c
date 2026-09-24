#include<stdio.h>
void main(){
    int n,a[10];
printf("Enter your limit\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Duplicate Elements are\n ");
for (int i=0;i<n;i++){
for (int j=i+1;j<n;j++){
    if(a[i]==a[j]){
     printf("%d\n",a[i]);    
    }
else{
    printf("No duplicate element found");
}
}

}
}