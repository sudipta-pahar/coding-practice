/*==========================================
Coded by Sudipta Pahar on 6.08.2020 @ 9:09am
============================================
*/

#include<stdio.h>
int label(int x, int y){                   //x:number of interns; y: password used
    int label = 0, day;
    if(y%5000==0){
        return (y/5000);
    }
    else{
        for(int i=1; i<50; i++){           //looping through the total number of days
            day = (i-1)+5000+i;            //calculating day-id through formula
            for(int j=0; j<x; j++){        //iterating through the number of interns for the particular day
                if(5000*j+day==y){
                    label = label + i+1;
                }
            }
        }
        return label;
    }
}

int main(){
    int input1, input2;
    scanf("%d%d", &input1, &input2);
    printf("%d", label(input1, input2));
    return 0;
}
