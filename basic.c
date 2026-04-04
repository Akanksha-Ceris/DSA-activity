#include<stdio.h>
int main(){
    
    int array[10]={1,2,3,4,4,5,6,7,8,9},i,j,n;
    
    for(i=0;i<=10;i++){
        for(j=i+1;j<=10;j++){
            if(array[i] == array[j]){
                printf("Duplicate number is %d %d",array[i],array[j]);
                
            }

        }
    }
return 0;
}