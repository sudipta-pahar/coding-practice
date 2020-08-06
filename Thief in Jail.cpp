/*==========================================
Coded by Sudipta Pahar on 6.08.2020 @ 8:30am
============================================
*/

#include <stdio.h>
int caljump(int x, int y, int n, int height[]){
    int count=0;
    for(int i=0; i<n; i++){
       if(height[i]<x){
           count++;       //calculating ideal cases, where wall height is less or equal to his jumping ability
       }
       else{
           int temp=height[i];//calculating cases where wall height is more than his jumping ability
           while(temp>x){
               temp-=(x-y);
               count++;
           }
           count++;        //since he will drop back to ground after every jump, this count will take care of that
       }
    }
    return count;
}

int main()
{
    int x, y, n;
    //printf("Enter number of jumps: ");
    scanf("%d", &n);
    int arr[n];
    //printf("Each wall height\n");
    for(int i=0; i<n; i++){
        //printf("Wall height %d: ", i);
        scanf("%d", &arr[i]);
    }
    //printf("Jump and fall-back ability\n");
    //printf("Enter jump ability: ");
    scanf("%d", &x);
    //printf("Enter fall-back ability: ");
    scanf("%d", &y);
    //printf("Number of jumps required: ");
    printf("%d", caljump(x,y,n,arr));
    return 0;
}
