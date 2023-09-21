#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i,k;
    int arr[100];
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
       
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=n;i>=0;i--){
        arr[i]=arr[i-1];
        }
    arr[0]=k;
        for(i=0;i<=n;i++){
            printf("%d ",arr[i]);
        }
         
    return 0;
}
