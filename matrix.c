// Two Programs are here

// 1) Take input from user of 3x3 Matrix and print elements as asked

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int m, n,i;
	printf("Enter no. of rows and columns: \n");
	scanf("%d%d", &m, &n);
	int **a;
	//Allocate memory to matrix
	a = (int **) malloc(m * sizeof(int *));
	
	for(int i=0; i<m; i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
	}
	//Read elements into matrix
	printf("Input elements in the matrix : \n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("element-[%d],[%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Print elements in the matrix
	printf("\n The matrix is : \n\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d \t ", a[i][j]);
		}
		printf("\n");
	}
	//Dellocating memory of matrix
	for(int i=0; i<m; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}


    
      // 2) C program to take input from the user of matrix and print the Sum of Left and Right Diagonal elements
     
 
    #include <stdio.h>
    void main ()
    {
 
        static int array[10][10];
        int i, j, m, n, a = 0, sum = 0;
 
        printf("Enter the rows and columns of the matrix : \n");
        scanf("%d %d", &m, &n);
 
        if (m == n ) 
        {
 
            printf("Enter the elements of the matrix : \n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
 
            printf("The given matrix is \n");
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j)
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
 
            for (i = 0; i < m; ++i) 
            {
                sum = sum + array[i][i];
                a = a + array[i][m - i - 1];
            }
 
            printf("\nThe sum of the Left diagonal elements is = %d\n", sum);
            printf("The sum of the Right diagonal elements is  = %d\n", a);
 
        }
 
        else
            printf("The given order is not square matrix\n");
 
    }
