
#include <stdio.h>
int main(){
    int n; int target;int b;
   printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
printf("enter the elements of the array");
    scanf("%d",&a[i]);
    }

 printf("enter the target of array");
    scanf("%d",&target);
    for(int i =0;i<n;i++){
if(target ==a[i]){
    b=i;
    for(int j =b;j<n-1;j++){
        a[j]=a[j+1];
    }

}


}
n--;
for(int i =0;i<n;i++){
printf("%d",a[i]);

}
return 0;
}
