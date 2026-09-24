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

printf("Enter the value and position to update: ");
scanf("%d %d",&value,&pos);
if(pos>n||pos<1){
    printf("Invalid");
}

else{

    pos=pos-1;

    a[pos]=value;
}


printf("Array is :\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);

}
}

}




