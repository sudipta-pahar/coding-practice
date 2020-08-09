#include <stdio.h>
#include <stdlib.h>

void jump(int y){
    int j=0;
    int flag;
    int temp = y;
    int arr[256];
    while(temp>0){                      //extracting the digits and loading it in an array
        arr[j++]= temp%10;
        temp=temp/10;
    }
    for(int i = j-1; i>=0; i--){
        if((arr[i]-arr[i+1]==1)||(arr[i+1]-arr[i]==1)){         //checking if neighbouring digits differ by 1
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag){
        printf("%d ", y);                       //if yes, print that number
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    if(x>10){
        for(int i=0; i<10; i++){
            printf("%d ", i);                   //since single digits number always follow jump rule, they are always printed
        }
    }
    for(int i=10; i<x; i++){                    //looping the range 
        jump(i);
    }
    return 0;
}
