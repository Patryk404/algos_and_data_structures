#include <stdio.h>
#define n 10
int tab[n] = {1,2,3,4,5,6,7,8,9}; 

void find(int arr[],int left, int right,int x){
    if(left>right){
        printf("Element %d not found",x);
    }
    else {
        if(arr[left]==x){
            printf("Found element x %d",x);
            return 0;
        }
        else{
            int temp = left+1;
            find(arr,temp,right,x);
        }
    }
}

int main(){ 
    find(tab,0,n-1,6);
}