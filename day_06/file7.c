// q_06

#include <stdio.h>

int main(){

    int size;
    scanf("%d",&size);
    int arr[size];
    int odd,even;
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0) even+=1;
        else odd+=1;
    }printf("%d%d",odd,even);

    return 0;
}