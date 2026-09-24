#include <stdio.h>
void main(){
    int a[10],i,n,pos,value;

printf("Enter your limit: ");
scanf("%d",&n);

if(n>=10){
printf("Memory is full");
}

else{
printf("Enter the values\n");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

printf("Enter the value and position to insert: ");
scanf("%d %d",&value,&pos);
if(pos>n||pos<0){
    printf("Invalid");
}

else{
    
    for(i=n-1;i>=pos;i--){
    a[i+1]=a[i];
}

a[pos]=value;
n=n+1;

printf("Array is :\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);

}
}

}




}