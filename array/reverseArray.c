#include <stdio.h>
int main(){

int n;int tempo;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
  printf("enter array elements :");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

int i=0;int j=n-1;
while(i<=j){
    tempo=a[i];
    a[i]=a[j];
    a[j]=tempo;
i++;j--;
}
  printf("the riverse array is :");

for(int i=0;i<n;i++){
    printf(" %d\t",a[i]);
}

    return 0;

}
