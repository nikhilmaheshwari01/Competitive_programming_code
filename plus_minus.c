
#include<stdio.h>
int main(){
    int arr[100],n,i;
    float count=0,count1=0,count2=0,count3=0,a,b,c;
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
        count++;
        if (arr[i]>0)
    {
        count1++;
    }
    else if (arr[i]==0)
    {
        count2++;
    }
    else {
        count3++;
    }
    }
    a = count1/count;
    b = count2/count;
    c = count3/count;
    printf("%.6f\n%.6f\n%.6f\n",a,c,b);
    return 0;
    
}