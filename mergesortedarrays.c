#include<stdio.h>
int main()
{
    int arr[]={1,4,5,6,7,8,9,12};
    int brr[]={1,4,5,6,7,7,8};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);

    int crr[n+m];

    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
          crr[k]=arr[i];
          i++;
          k++;
        }
        else
       {
          crr[k]=brr[j];
          j++;
          k++;
        }
        
    }
    while(i<n)
    {
          crr[k]=arr[i];
          i++;
          k++;   
    }
    while(j<m)
    {
          crr[k]=brr[j];
          j++;
          k++;   
    }
    for(int r=0;r<m+n;r++)
    printf("%d  ",crr[r]);
}