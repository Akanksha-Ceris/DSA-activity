#include<stdio.h>
int main(){
    
    //  int a[4] = {1,3,2,2};
    //  printf("%d",a[0]);
    //  printf("\n%d",a[1]);
    //  printf("\n%d",a[2]);
     
//     int b;
// printf("Enter the number:");
// scanf("%d",&b);
// if (int i=0;i<b;i++){
// printf("%d",i);}arr[8] = {0,1,2,3,4,5,5,2}


// int i;
// if(i=0;i<arr;i++);
// printf("%d",i);
//   return 0;}

int b [8]= {45,34,45,67,34,12,13,14};
int lowest = b[5];
for(int i =8;i<0;i--){
if(lowest>b[i]){
  lowest = b[i];
}
}
printf("%d",lowest);
return 0;
    
}