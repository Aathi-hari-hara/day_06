//q_2

#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];       
    for(int i=0;i<=size;i++){ 
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<=size;j++){
        printf("%d",arr[j]);
    }
    return 0;
}   