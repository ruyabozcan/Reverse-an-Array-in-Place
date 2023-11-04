#include <stdio.h>
#include <string.h>

int main(void) {
  void reverse(int[],int);
  void reverseStr(char[]);
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  reverse(arr, size);
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }  
  char num[]="123456-";
  reverseStr(num);
  printf("\nThe reverse of string=%s",num);  
  
  return 0;
}
void reverse(int a[],int n){
 int i,j,temp;
  for(i=0,j=n-1;i<j;i++,j--){
     temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  } 
}
void reverseStr(char a[]){
 int i,j;
  char temp;
  for(i=0,j=strlen(a)-1;i<j;i++,j--){
     temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  } 
}
