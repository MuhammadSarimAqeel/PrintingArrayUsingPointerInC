#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]= {2,5,7,8,1};
    int *a = arr;
    for(int i =0 ; i < 5 ; i++){
        printf("%d", *a);
        printf("\n");
        a= a+1;
    }

    return 0;
}
