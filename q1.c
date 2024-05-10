#include<stdio.h>
int main(){
  int sizeA;
   printf("Enter your first ");
 scanf("%d",&sizeA);
 int a[sizeA];
 for(int i=0;i<sizeA;i++){
  printf("a[%d]= ",i);
  scanf("%d",&a[i]);
 }

   int sizeB;
   printf("Enter your first ");
 scanf("%d",&sizeB);
 int b[sizeB];
 for(int i=0;i<sizeB;i++){
  printf("b[%d]= ",i);
  scanf("%d", &b[i]);
 }
 int z=0;
 int c[sizeA+sizeB];
  for(int i=0;i<sizeA;i++){
c[z]=a[i];
z++;
}
 for(int i=0;i<sizeB;i++){
c[z]=b[i];
z++;
}
 for(int i=0;i<z;i++){
printf("%d ",c[i]);
 }
}