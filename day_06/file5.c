// q_3
#include <stdio.h>

int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }printf("%d",sum/size);
    return 0;
}

// booble short ->next class topic