#include<stdio.h>
void printarray(int *a,int n){

for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}

}
void insertionsort(int *a,int n){
    int key,j,i;
for(i=0;i<n;i++)
    {
  key=a[i];
  j=i-1;
  while(j>0 && a[j]>key)
  {
a[j+1]=a[j];
j--;
  }
  
a[j+1]=key;

    }
}

int main(){
int a[]={2,7,3,1,9};
int n=5;
printarray(a,n);
insertionsort(a,n);
printf("\n");
printarray(a,n);


}