#include<stdio.h>
void main()
{
int a[100],i,pos,item,n;
printf("enter the array size:");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
scanf("%d",&a[i]);}
for(i=0;i<=n-1;i++){ 
printf("%d",a[i]);
}
n=n+1;
printf("enter the pos:");
scanf("%d",&pos);
printf("enter the item :");
scanf("%d",&item);
for(i=n-1;i>=pos-1;i--)
a[i] =a[i-1];
a[pos-1]=item;
for(i=0;i<=n-1;i++){
printf("%d",a[i]);
}

}


