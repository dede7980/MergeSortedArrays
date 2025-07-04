#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);
    int *brr = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &brr[i]);
    }

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

    free(arr);
    free(brr);
}