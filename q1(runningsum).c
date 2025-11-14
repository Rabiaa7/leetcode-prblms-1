#include<stdio.h> //TAKING INPUT FROM USER
void runningSum(int num[],int size,int result[]){
	int i;
   result[0]=num[0];
   for(i=1;i<size;i++){
   	result[i]=result[i-1]+num[i]; 
   }
	
}
int main(){
   int n,i;
   printf("Enter n:");
   scanf("%d",&n);
   
   int nums[n];
   int result[n];
   
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
	
	 runningSum(nums, n, result);

    printf("Running sum array: ");
    for( i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
	
	
}