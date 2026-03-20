
#include <stdio.h>
int main(){
    int n; 
   printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
      for(int i =0;i<n;i++){
printf("enter the elements of the array");
    scanf("%d",&a[i]);
    }
    int max_sum =a[0];int current_sum=a[0] ;
      for(int i =1;i<n;i++){
        if( current_sum+a[i]>a[i]){
            current_sum=  current_sum+a[i];
        }
        else{
             current_sum=a[i];
        }
        if( current_sum>max_sum){
            max_sum=current_sum;
        }

    }
    printf("the max sum is %d",max_sum);

return 0;
}
