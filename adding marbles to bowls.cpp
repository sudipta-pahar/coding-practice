#include <stdio.h>
int marble(int n, int arr[]){
    int i=0;
    int count;
    for(i=n-1; i>=0; i--){
        if(arr[i]<9){
            count = i+1;
            break;
        }
        else{
            count =0;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", marble(n, arr));
    return 0;
}
