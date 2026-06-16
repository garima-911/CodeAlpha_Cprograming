#include<stdio.h>
#include<stdlib.h>

void addition(){
    int A[10][10],B[10][10],C[10][10];
int n,i,j;
printf("Enter the size of matrix:  ");
scanf("%d",&n);
printf("\nEnter the element for matrix A  \n");
for( i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
    printf("\n");
}
printf("\nEnter the element for the matrix B \n");
for( i=0;i<n;i++){
    for( j=0;j<n;j++){
        scanf("%d",&B[i][j]);
    }
    printf("\n");
}
for(i=0;i<n;i++){
    for( j=0;j<n;j++){
       C[i][j]=A[i][j]+B[i][j];
    }
}
printf("The sum of two matrix is:  \n");
for( i=0;i<n;i++){
    for( j=0;j<n;j++){
        
        printf("%d ",C[i][j]);
    }
    printf("\n");
}
}

void transpose(){
    int r,c;
    printf("Enter the number of row:  ");
    scanf("%d",&r);
        printf("Enter the number of column:  ");
    scanf("%d",&c);
int arr[r][c];
printf("\nEnter the all the element in matrix: \n ");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
printf("the element you have entered: \n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
//transpose
printf("\n");
printf("Transpose of matrix:\n");
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d",arr[j][i]);
    }
    printf("\n");
}
}
void multiplication(){
int i,j,m,n,p,q,k;

printf("\nEnter the row for the first matrix: ");
scanf("%d",&m);
printf("\nEnter the column for the first matrix: ");
scanf("%d",&n);

printf("\nEnter the rows for second matrix: ");
scanf("%d",&p);
printf("\nEnter the column for the second matrix:");
scanf("%d",&q);
int a[m][n],b[p][q];
if(n!=p){
    printf("\nThese matrices cannot be multiplied\n");
    return;
}

printf("\nEnter the all element in first matrix:\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("\nEnter the all element in second matrix:\n");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
    printf("\n");
}
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0;k<n;k++){
            res[i][j]+=a[i][k]*b[k][j];
        }
    }
}
printf("\nThe multiplication of two matrix is\n");
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}


}


int main(){
    int choice;
while(choice!=4){
    printf("\n1.Addition of matrix\n2.MUltiply of matrix\n3.transpose of matrix\n4.exit\n");
    printf("Enter your choice:  ");
    scanf("%d",&choice);
    switch(choice){
        case 1:addition();
        break;
        case 2:multiplication();
        break;
        case 3: transpose();
        break;
        case 4:exit(0);
        break;
        default:printf("\nInvalid choice. Please try again!\n");
        break;
    }
}


}