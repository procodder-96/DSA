#include<stdio.h>
int fact(int );
int main(){ 
   int a=  fact(6 );
  // printf("%d",a);
    return a;
}
int fact(int n){
int facto=1;
    for(int i=1;i<n;i++){
        facto=facto*i;
    }
    return facto;

}



