#include<stdio.h>
void printarray(int *A,int n){
for(int i=0;i<n;i++){
    printf("%d",A[i]);
}
    printf("\n");
}
void selectionsort(int *A,int n){
int indexofmin,temp;
printf("running sort....\n");
for(int i=0;i<n-1;i++){
    indexofmin=i;
    for(int j=j+1;j<n;j++){
        if(A[j]<A[indexofmin]){
            indexofmin=j;
        }
    }
    temp=A[i];
    A[i]=A[indexofmin];
    A[indexofmin]=temp;
}

}
int main(){
int A[]={1,5,3,2,7,9};
int n=6;
printarray(A,n);
selectionsort(A,n);
printarray(A,n);
return 0;
}
