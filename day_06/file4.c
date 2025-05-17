//q_2

#include <stdio.h>

int main()
{
    int arr[]={1,2,10,3,4,5};
    int max=arr[0];    // or INT_MIN runs without any error and accebtable in all the test case
    int len =sizeof(arr)/sizeof(arr[0]);  // used to calculate the length of array
    for (int i=0;i<=len-1;i++){
        if (max<arr[i]) {
            max=arr[i];
            
        }
        
    }printf("%d",max);
    
    return 0;
}