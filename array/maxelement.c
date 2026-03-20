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
    int c=n/2;
    int hash[1000]={0};

  for(int i =0;i<n;i++){

    hash[a[i]]++;
    }
for(int i =0;i<n;i++){

    hash[a[i]]++;
    }












    return 0;



}