#include<stdio.h>
int main(){
int n;
printf("Enter n\n");
scanf("%d",&n);
int i,j=0;
int num[2*n]; 
int result[2*n];
 printf("Enter %d numbers: ", 2 * n); 
    for (i = 0; i < 2 * n; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0;i<n;i++){
        result[j++] = num[i];     
        result[j++] = num[i + n]; 
    }
  printf("Shuffled array: ");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }

    return 0;

}