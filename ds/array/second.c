#include<stdio.h>
void main(){
    int l,s,n,a[10];
printf("Enter your limit\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

if(a[0]<a[1]){
    l=a[1];
    s=a[0];
}
else{
    s=a[1];
    l=a[0];
}


for(int i=2;i<n;i++){
    if(a[i]>l){

        s=l;
        l=a[i];
    }

    else if(a[i]>s){
        s=a[i];
    }

}

printf("The second largest number is %d",s);

}