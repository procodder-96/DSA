#include<stdio.h>
void linearSearch(int a[],int n, int target){
for(int i=0;i<n;i++){
if(a[i]==target){
    printf("no is found \n ");
     printf(" position of the no is %d ",i+1);
     break;
}

     printf("no is  not found ,please enter valid no ");

}
}
int main(){
 int n, target;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the elements of array in sorted order: ");
        scanf("%d", &a[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    
linearSearch(a,n,target);
    return 0;
}
