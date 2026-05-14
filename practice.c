#include <stdio.h>
int main () {
    int i,arr[5],brr[5],crr[10];
    for (i = 0 ; i < 5 ; i ++) {
        printf("Enter num at %d = ",i);
        scanf("%d",&arr[i]);
    }
    for (i = 0 ; i < 5 ; i ++) {
        printf("Enter num at %d = ",i);
        scanf("%d",&brr[i]);
    }
    for (i = 0; i <5 ; i ++) {
        crr[i]=arr[i];
        crr[i+5]=brr[i];
    }
    for (i = 0 ; i < 10 ; i ++) {
        printf("%d ",crr[i]);
    }

    return 0;
}