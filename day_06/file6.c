// q_5

#include <stdio.h>

int main(){
    
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=len-1;i>=0;i--){
        printf("%d",arr[i]);
    }

    return 0;
}

//  m2

#include <stdio.h>
int main(){
    
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<=len/2;i++){
        int t=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=t;
        
    }
    for (int i=0;i<len;i++){
        printf("%d",arr[i]);
    }
    return 0;
}