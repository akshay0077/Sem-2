#include <stdio.h>

int main(){
  int arr[15];
  int *ptr=arr;

  printf("Enter the 15 Element in Here : ");
  for(int i=0; i<15; i++){
    scanf("%d",&arr[i]);
  }

  printf("Base Address of Arrays : ");

  for(int i=0; i<15; i++){
    printf("%d ",*(ptr+i));
  }
  return 0;
}