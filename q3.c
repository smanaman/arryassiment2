#include<stdio.h>
int main(){
 int size;
 printf("Enter your number");
 scanf("%d",&size);

int arr[size];

for (int i = 0; i<size; i++)
{
    printf("arr[%d] :-",i);
    scanf("%d",&arr[i]);
}
for (int i = 0; i<size; i++)
{
    printf("%d ",arr[i]*arr[i]);
   
}

}