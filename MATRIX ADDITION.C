#include<stdio.h>
int main(){
    int rows,col;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&rows,&col);
    int a[rows][col],b[rows][col],c[rows][col];
    printf(" enter elements of matrix a:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
         printf(" enter elements of matrix b\n");
         for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
         
        }
       for(int i=0;i<rows;i++){
           for(int j=0;j<col;j++){
        c[i][j]=a[i][j]+b[i][j];
           }
       }
          printf("resultant matrix:\n");
          for(int i=0;i<rows;i++){
              for(int j=0;j<col;j++){
                  printf("%d",c[i][j]);
                  
              }
                  printf("\n");
          }
          return 0;
    }
              
}       
