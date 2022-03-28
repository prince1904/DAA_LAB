//implement bubble sort and total no of comparisons.
#include<stdio.h>
void printarray(int *A,int n){
for(int i=0;i<n;i++){
    printf("%d",A[i]);
}
    printf("\n");
}
void bubblesort(int *A,int n){
int temp;
int issorted=0;
for(int i=0;i<n-1;i++){
    printf("comparison no %d\n",i+1);
    for(int j=0;j<n-1;j++){
        if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
}
}
int main(){
    printf("\n");
int A[]={1,2,5,6,12,4,5,3,21,89};

int n=10;
printarray(A,n);
bubblesort(A,n);
printarray(A,n);
return 0;
}
