#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[10],i,n,val,pos;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        a[i]=i+10;
       
    }
    printf("array enetered by user are:");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("enter the position you want :");
    scanf("%d",pos);
    printf("enter the element :");
    scanf("%d",&val);
    for ( i = 0; i <=n; i++)
    {
        if (i>pos)
        {
            a[i]=a[i-1];
        }
        else{
            if(i==pos){
                a[i]=val;
            }
            else{
                a[i]=a[i];
            }
        }
                
    }
    printf("after insertion:");
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    
    

    
}